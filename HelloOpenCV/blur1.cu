#include "invert.h"

#define BLOCK_SIZE (32)

#define ENABLE_TIMING_CODE 1

__global__
void gpuBlur1(
	float* image,
	int width,
	int height
	)
{
	int row = blockIdx.y * BLOCK_SIZE + threadIdx.y; // sat�r No.

	int col = blockIdx.x * BLOCK_SIZE + threadIdx.x; // s�tun No.

	int cIdx = ( row * width + col ) * 3; // 3 ile �arp�m RGB i�in, linearIndex.

	/*
	       *( image + linearIndex ): Blue, in [0, 1]
		   *( image + linearIndex + 1 ): Green, in [0, 1]
		   *( image + linearIndex + 2 ): Red, in [0, 1]
	*/

	__shared__ float smBlockB[BLOCK_SIZE][BLOCK_SIZE];
	__shared__ float smBlockG[BLOCK_SIZE][BLOCK_SIZE];
	__shared__ float smBlockR[BLOCK_SIZE][BLOCK_SIZE];

	smBlockB[threadIdx.x][threadIdx.y] = image[ cIdx ];
	smBlockG[threadIdx.x][threadIdx.y] = image[ cIdx + 1 ];
	smBlockR[threadIdx.x][threadIdx.y] = image[ cIdx + 2 ];

	__syncthreads();
	
	for(int i = 0; i < BLOCK_SIZE; i++)
	{
		__syncthreads();

		for(int j = 0; j < BLOCK_SIZE - 1; j++)
		{
			smBlockB[i][j] = abs(smBlockB[i][j] - smBlockB[i][j + 1]);
			smBlockG[i][j] = abs(smBlockG[i][j] - smBlockG[i][j + 1]);
			smBlockR[i][j] = abs(smBlockR[i][j] - smBlockR[i][j + 1]);
		}

	__syncthreads();	


		for(int j = BLOCK_SIZE - 1; j < BLOCK_SIZE; j++)
		{
			smBlockB[i][j] = 0;
			smBlockG[i][j] = 0;
			smBlockR[i][j] = 0;
		}
	}
	
	__syncthreads();	
	
	image[ cIdx ]     =	smBlockB[threadIdx.x][threadIdx.y];
	image[ cIdx + 1 ] = smBlockG[threadIdx.x][threadIdx.y];
	image[ cIdx + 2 ] = smBlockR[threadIdx.x][threadIdx.y];
		
	
	//image[ cIdxRight + 2 ] = 0;

	/**( image + cIdx ) = abs((*( image + cIdx ) - *( image + cIdxRight )));
	*( image + cIdx + 1 ) = abs((*( image + cIdx + 1 ) - *( image + cIdxRight + 1 )));
	*( image + cIdx + 2 ) = abs((*( image + cIdx + 2 ) - *( image + cIdxRight + 2 )));*/
}

void deviceBlur1Launch(
	float *d_Image,
	int width,
	int height
	)
{
	 // launch kernel
	dim3 dimBlock( BLOCK_SIZE, BLOCK_SIZE );
    dim3 dimGrid( width / dimBlock.x, height / dimBlock.y );

#if ENABLE_TIMING_CODE

	cudaEvent_t start, stop;
	cudaEventCreate(&start);
	cudaEventCreate(&stop);
	cudaEventRecord(start, 0);

#endif
	
    gpuBlur1<<< dimGrid, dimBlock >>>( d_Image, width, height);
	
#if ENABLE_TIMING_CODE
	cudaEventRecord(stop, 0);
	cudaEventSynchronize(stop);
	float elapsedTime;
	cudaEventElapsedTime(&elapsedTime, start, stop);

    // block until the device has completed
    cudaThreadSynchronize();
	
	printf("kernel time: %.3f ms\n", elapsedTime);
#endif

	cudaThreadSynchronize();

    // check if kernel execution generated an error
    // Check for any CUDA errors
    checkCUDAError("kernel invocation");
}
