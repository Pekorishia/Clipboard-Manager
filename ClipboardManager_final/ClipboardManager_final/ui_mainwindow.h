/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *texts;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTextBrowser *clipText_3;
    QTextBrowser *clipText;
    QTextBrowser *clipText_5;
    QTextBrowser *clipText_7;
    QTextBrowser *clipText_2;
    QLabel *label;
    QTextBrowser *clipText_9;
    QTextBrowser *clipText_4;
    QTextBrowser *clipText_6;
    QTextBrowser *clipText_8;
    QPushButton *textCopy_1;
    QPushButton *textCopy_2;
    QPushButton *textCopy_3;
    QPushButton *textCopy_4;
    QPushButton *textCopy_5;
    QPushButton *textCopy_6;
    QPushButton *textCopy_7;
    QPushButton *textCopy_8;
    QPushButton *textCopy_9;
    QWidget *images;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QGraphicsView *clipImage_4;
    QSpacerItem *horizontalSpacer;
    QGraphicsView *clipImage_3;
    QLabel *label_5;
    QLabel *imgDim_3;
    QLabel *imgSize;
    QLabel *imgDim_4;
    QSpacerItem *horizontalSpacer_2;
    QGraphicsView *clipImage;
    QLabel *imgDim;
    QLabel *imgSize_5;
    QLabel *label_4;
    QLabel *imgSize_2;
    QLabel *imgSize_3;
    QLabel *imgSize_4;
    QLabel *imgDim_5;
    QGraphicsView *clipImage_5;
    QLabel *imgDim_2;
    QSpacerItem *horizontalSpacer_3;
    QGraphicsView *clipImage_2;
    QLabel *label_3;
    QPushButton *copy1;
    QPushButton *copy2;
    QPushButton *copy3;
    QPushButton *copy4;
    QPushButton *copy5;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(539, 692);
        MainWindow->setStyleSheet(QStringLiteral("background:rgb(255,250,220);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(frame);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setStyleSheet(QLatin1String("\n"
"    font: bold 14px;"));
        texts = new QWidget();
        texts->setObjectName(QStringLiteral("texts"));
        gridLayoutWidget = new QWidget(texts);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(90, 0, 391, 561));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        clipText_3 = new QTextBrowser(gridLayoutWidget);
        clipText_3->setObjectName(QStringLiteral("clipText_3"));

        gridLayout->addWidget(clipText_3, 3, 0, 1, 1);

        clipText = new QTextBrowser(gridLayoutWidget);
        clipText->setObjectName(QStringLiteral("clipText"));

        gridLayout->addWidget(clipText, 1, 0, 1, 1);

        clipText_5 = new QTextBrowser(gridLayoutWidget);
        clipText_5->setObjectName(QStringLiteral("clipText_5"));

        gridLayout->addWidget(clipText_5, 8, 0, 1, 1);

        clipText_7 = new QTextBrowser(gridLayoutWidget);
        clipText_7->setObjectName(QStringLiteral("clipText_7"));

        gridLayout->addWidget(clipText_7, 14, 0, 1, 1);

        clipText_2 = new QTextBrowser(gridLayoutWidget);
        clipText_2->setObjectName(QStringLiteral("clipText_2"));

        gridLayout->addWidget(clipText_2, 2, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        clipText_9 = new QTextBrowser(gridLayoutWidget);
        clipText_9->setObjectName(QStringLiteral("clipText_9"));

        gridLayout->addWidget(clipText_9, 16, 0, 1, 1);

        clipText_4 = new QTextBrowser(gridLayoutWidget);
        clipText_4->setObjectName(QStringLiteral("clipText_4"));

        gridLayout->addWidget(clipText_4, 4, 0, 1, 1);

        clipText_6 = new QTextBrowser(gridLayoutWidget);
        clipText_6->setObjectName(QStringLiteral("clipText_6"));

        gridLayout->addWidget(clipText_6, 9, 0, 1, 1);

        clipText_8 = new QTextBrowser(gridLayoutWidget);
        clipText_8->setObjectName(QStringLiteral("clipText_8"));

        gridLayout->addWidget(clipText_8, 15, 0, 1, 1);

        textCopy_1 = new QPushButton(texts);
        textCopy_1->setObjectName(QStringLiteral("textCopy_1"));
        textCopy_1->setGeometry(QRect(10, 40, 61, 31));
        textCopy_2 = new QPushButton(texts);
        textCopy_2->setObjectName(QStringLiteral("textCopy_2"));
        textCopy_2->setGeometry(QRect(10, 100, 61, 31));
        textCopy_3 = new QPushButton(texts);
        textCopy_3->setObjectName(QStringLiteral("textCopy_3"));
        textCopy_3->setGeometry(QRect(10, 160, 61, 31));
        textCopy_4 = new QPushButton(texts);
        textCopy_4->setObjectName(QStringLiteral("textCopy_4"));
        textCopy_4->setGeometry(QRect(10, 220, 61, 31));
        textCopy_5 = new QPushButton(texts);
        textCopy_5->setObjectName(QStringLiteral("textCopy_5"));
        textCopy_5->setGeometry(QRect(10, 280, 61, 31));
        textCopy_6 = new QPushButton(texts);
        textCopy_6->setObjectName(QStringLiteral("textCopy_6"));
        textCopy_6->setGeometry(QRect(10, 340, 61, 31));
        textCopy_7 = new QPushButton(texts);
        textCopy_7->setObjectName(QStringLiteral("textCopy_7"));
        textCopy_7->setGeometry(QRect(10, 400, 61, 31));
        textCopy_8 = new QPushButton(texts);
        textCopy_8->setObjectName(QStringLiteral("textCopy_8"));
        textCopy_8->setGeometry(QRect(10, 460, 61, 31));
        textCopy_9 = new QPushButton(texts);
        textCopy_9->setObjectName(QStringLiteral("textCopy_9"));
        textCopy_9->setGeometry(QRect(10, 520, 61, 31));
        tabWidget->addTab(texts, QString());
        images = new QWidget();
        images->setObjectName(QStringLiteral("images"));
        gridLayoutWidget_2 = new QWidget(images);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(100, 0, 321, 561));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        clipImage_4 = new QGraphicsView(gridLayoutWidget_2);
        clipImage_4->setObjectName(QStringLiteral("clipImage_4"));

        gridLayout_2->addWidget(clipImage_4, 4, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 4, 1, 1);

        clipImage_3 = new QGraphicsView(gridLayoutWidget_2);
        clipImage_3->setObjectName(QStringLiteral("clipImage_3"));

        gridLayout_2->addWidget(clipImage_3, 3, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_5, 0, 1, 1, 1);

        imgDim_3 = new QLabel(gridLayoutWidget_2);
        imgDim_3->setObjectName(QStringLiteral("imgDim_3"));
        imgDim_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(imgDim_3, 3, 1, 1, 1);

        imgSize = new QLabel(gridLayoutWidget_2);
        imgSize->setObjectName(QStringLiteral("imgSize"));
        imgSize->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(imgSize, 1, 5, 1, 1);

        imgDim_4 = new QLabel(gridLayoutWidget_2);
        imgDim_4->setObjectName(QStringLiteral("imgDim_4"));
        imgDim_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(imgDim_4, 4, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        clipImage = new QGraphicsView(gridLayoutWidget_2);
        clipImage->setObjectName(QStringLiteral("clipImage"));

        gridLayout_2->addWidget(clipImage, 1, 0, 1, 1);

        imgDim = new QLabel(gridLayoutWidget_2);
        imgDim->setObjectName(QStringLiteral("imgDim"));
        imgDim->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(imgDim, 1, 1, 1, 1);

        imgSize_5 = new QLabel(gridLayoutWidget_2);
        imgSize_5->setObjectName(QStringLiteral("imgSize_5"));
        imgSize_5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(imgSize_5, 5, 5, 1, 1);

        label_4 = new QLabel(gridLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 0, 5, 1, 1);

        imgSize_2 = new QLabel(gridLayoutWidget_2);
        imgSize_2->setObjectName(QStringLiteral("imgSize_2"));
        imgSize_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(imgSize_2, 2, 5, 1, 1);

        imgSize_3 = new QLabel(gridLayoutWidget_2);
        imgSize_3->setObjectName(QStringLiteral("imgSize_3"));
        imgSize_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(imgSize_3, 3, 5, 1, 1);

        imgSize_4 = new QLabel(gridLayoutWidget_2);
        imgSize_4->setObjectName(QStringLiteral("imgSize_4"));
        imgSize_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(imgSize_4, 4, 5, 1, 1);

        imgDim_5 = new QLabel(gridLayoutWidget_2);
        imgDim_5->setObjectName(QStringLiteral("imgDim_5"));
        imgDim_5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(imgDim_5, 5, 1, 1, 1);

        clipImage_5 = new QGraphicsView(gridLayoutWidget_2);
        clipImage_5->setObjectName(QStringLiteral("clipImage_5"));

        gridLayout_2->addWidget(clipImage_5, 5, 0, 1, 1);

        imgDim_2 = new QLabel(gridLayoutWidget_2);
        imgDim_2->setObjectName(QStringLiteral("imgDim_2"));
        imgDim_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(imgDim_2, 2, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 3, 1, 1);

        clipImage_2 = new QGraphicsView(gridLayoutWidget_2);
        clipImage_2->setObjectName(QStringLiteral("clipImage_2"));

        gridLayout_2->addWidget(clipImage_2, 2, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        copy1 = new QPushButton(images);
        copy1->setObjectName(QStringLiteral("copy1"));
        copy1->setGeometry(QRect(10, 60, 75, 23));
        copy2 = new QPushButton(images);
        copy2->setObjectName(QStringLiteral("copy2"));
        copy2->setGeometry(QRect(10, 180, 75, 23));
        copy3 = new QPushButton(images);
        copy3->setObjectName(QStringLiteral("copy3"));
        copy3->setGeometry(QRect(10, 280, 75, 23));
        copy4 = new QPushButton(images);
        copy4->setObjectName(QStringLiteral("copy4"));
        copy4->setGeometry(QRect(10, 390, 75, 23));
        copy5 = new QPushButton(images);
        copy5->setObjectName(QStringLiteral("copy5"));
        copy5->setGeometry(QRect(10, 500, 75, 23));
        tabWidget->addTab(images, QString());

        verticalLayout->addWidget(tabWidget);


        verticalLayout_2->addWidget(frame);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "Text", 0));
        textCopy_1->setText(QApplication::translate("MainWindow", "Copy", 0));
        textCopy_2->setText(QApplication::translate("MainWindow", "Copy", 0));
        textCopy_3->setText(QApplication::translate("MainWindow", "Copy", 0));
        textCopy_4->setText(QApplication::translate("MainWindow", "Copy", 0));
        textCopy_5->setText(QApplication::translate("MainWindow", "Copy", 0));
        textCopy_6->setText(QApplication::translate("MainWindow", "Copy", 0));
        textCopy_7->setText(QApplication::translate("MainWindow", "Copy", 0));
        textCopy_8->setText(QApplication::translate("MainWindow", "Copy", 0));
        textCopy_9->setText(QApplication::translate("MainWindow", "Copy", 0));
        tabWidget->setTabText(tabWidget->indexOf(texts), QApplication::translate("MainWindow", "Texts", 0));
        label_5->setText(QApplication::translate("MainWindow", "Dimension", 0));
        imgDim_3->setText(QApplication::translate("MainWindow", "Dim", 0));
        imgSize->setText(QApplication::translate("MainWindow", "Size", 0));
        imgDim_4->setText(QApplication::translate("MainWindow", "Dim", 0));
        imgDim->setText(QApplication::translate("MainWindow", "Dim", 0));
        imgSize_5->setText(QApplication::translate("MainWindow", "Size", 0));
        label_4->setText(QApplication::translate("MainWindow", "Size", 0));
        imgSize_2->setText(QApplication::translate("MainWindow", "Size", 0));
        imgSize_3->setText(QApplication::translate("MainWindow", "Size", 0));
        imgSize_4->setText(QApplication::translate("MainWindow", "Size", 0));
        imgDim_5->setText(QApplication::translate("MainWindow", "Dim", 0));
        imgDim_2->setText(QApplication::translate("MainWindow", "Dim", 0));
        label_3->setText(QApplication::translate("MainWindow", "Image", 0));
        copy1->setText(QApplication::translate("MainWindow", "Copy", 0));
        copy2->setText(QApplication::translate("MainWindow", "Copy", 0));
        copy3->setText(QApplication::translate("MainWindow", "Copy", 0));
        copy4->setText(QApplication::translate("MainWindow", "Copy", 0));
        copy5->setText(QApplication::translate("MainWindow", "Copy", 0));
        tabWidget->setTabText(tabWidget->indexOf(images), QApplication::translate("MainWindow", "Images", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
