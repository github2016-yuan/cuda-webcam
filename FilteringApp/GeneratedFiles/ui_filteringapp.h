/********************************************************************************
** Form generated from reading UI file 'filteringapp.ui'
**
** Created: Sat Sep 1 13:17:32 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTERINGAPP_H
#define UI_FILTERINGAPP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FilteringAppClass
{
public:
    QAction *actionCapture;
    QAction *actionProcess;
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QListView *lvFilters;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QPushButton *pbMoveFilterUp;
    QPushButton *pbRemove;
    QPushButton *pbMoveFilterDown;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QLabel *lblFilterType;
    QComboBox *cmbFilterType;
    QPushButton *pbAddFilter;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FilteringAppClass)
    {
        if (FilteringAppClass->objectName().isEmpty())
            FilteringAppClass->setObjectName(QString::fromUtf8("FilteringAppClass"));
        FilteringAppClass->resize(696, 389);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FilteringAppClass->sizePolicy().hasHeightForWidth());
        FilteringAppClass->setSizePolicy(sizePolicy);
        FilteringAppClass->setWindowOpacity(1);
        actionCapture = new QAction(FilteringAppClass);
        actionCapture->setObjectName(QString::fromUtf8("actionCapture"));
        actionCapture->setCheckable(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/FilteringApp/Resources/picture.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCapture->setIcon(icon);
        actionProcess = new QAction(FilteringAppClass);
        actionProcess->setObjectName(QString::fromUtf8("actionProcess"));
        actionProcess->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/FilteringApp/Resources/3x3_grid_2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionProcess->setIcon(icon1);
        centralWidget = new QWidget(FilteringAppClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 60, 671, 241));
        lvFilters = new QListView(groupBox);
        lvFilters->setObjectName(QString::fromUtf8("lvFilters"));
        lvFilters->setGeometry(QRect(10, 20, 256, 211));
        formLayoutWidget = new QWidget(groupBox);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(390, 20, 271, 211));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(280, 20, 97, 211));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pbMoveFilterUp = new QPushButton(widget);
        pbMoveFilterUp->setObjectName(QString::fromUtf8("pbMoveFilterUp"));
        pbMoveFilterUp->setDefault(false);
        pbMoveFilterUp->setFlat(false);

        verticalLayout->addWidget(pbMoveFilterUp);

        pbRemove = new QPushButton(widget);
        pbRemove->setObjectName(QString::fromUtf8("pbRemove"));

        verticalLayout->addWidget(pbRemove);

        pbMoveFilterDown = new QPushButton(widget);
        pbMoveFilterDown->setObjectName(QString::fromUtf8("pbMoveFilterDown"));
        pbMoveFilterDown->setDefault(false);
        pbMoveFilterDown->setFlat(false);

        verticalLayout->addWidget(pbMoveFilterDown);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 10, 474, 30));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lblFilterType = new QLabel(widget1);
        lblFilterType->setObjectName(QString::fromUtf8("lblFilterType"));

        horizontalLayout->addWidget(lblFilterType);

        cmbFilterType = new QComboBox(widget1);
        cmbFilterType->setObjectName(QString::fromUtf8("cmbFilterType"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cmbFilterType->sizePolicy().hasHeightForWidth());
        cmbFilterType->setSizePolicy(sizePolicy1);
        cmbFilterType->setMinimumSize(QSize(300, 0));

        horizontalLayout->addWidget(cmbFilterType);

        pbAddFilter = new QPushButton(widget1);
        pbAddFilter->setObjectName(QString::fromUtf8("pbAddFilter"));

        horizontalLayout->addWidget(pbAddFilter);

        FilteringAppClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(FilteringAppClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setMovable(false);
        mainToolBar->setIconSize(QSize(30, 30));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        mainToolBar->setFloatable(false);
        FilteringAppClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(FilteringAppClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setStyleSheet(QString::fromUtf8("color: blue; font: 12px;"));
        FilteringAppClass->setStatusBar(statusBar);
#ifndef QT_NO_SHORTCUT
        lblFilterType->setBuddy(cmbFilterType);
#endif // QT_NO_SHORTCUT

        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCapture);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionProcess);

        retranslateUi(FilteringAppClass);

        QMetaObject::connectSlotsByName(FilteringAppClass);
    } // setupUi

    void retranslateUi(QMainWindow *FilteringAppClass)
    {
        FilteringAppClass->setWindowTitle(QApplication::translate("FilteringAppClass", "OpenCV + CUDA + Qt + C++AMP", 0, QApplication::UnicodeUTF8));
        actionCapture->setText(QApplication::translate("FilteringAppClass", "Capture", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCapture->setToolTip(QApplication::translate("FilteringAppClass", "Starts capturing.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionProcess->setText(QApplication::translate("FilteringAppClass", "Process", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionProcess->setToolTip(QApplication::translate("FilteringAppClass", "Starts processing the captured images.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("FilteringAppClass", "Filter Chain", 0, QApplication::UnicodeUTF8));
        pbMoveFilterUp->setText(QApplication::translate("FilteringAppClass", "Move Up", 0, QApplication::UnicodeUTF8));
        pbRemove->setText(QApplication::translate("FilteringAppClass", "Remove", 0, QApplication::UnicodeUTF8));
        pbMoveFilterDown->setText(QApplication::translate("FilteringAppClass", "Move Down", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lblFilterType->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        lblFilterType->setStatusTip(QApplication::translate("FilteringAppClass", "Select a filter type and press add filter to add filter to the chain.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        lblFilterType->setText(QApplication::translate("FilteringAppClass", "Filte&r Type:", 0, QApplication::UnicodeUTF8));
        pbAddFilter->setText(QApplication::translate("FilteringAppClass", "Add Filter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FilteringAppClass: public Ui_FilteringAppClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTERINGAPP_H