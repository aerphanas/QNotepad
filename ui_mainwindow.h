/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionopen;
    QAction *actionprint;
    QAction *actionexit;
    QAction *actioncopy;
    QAction *actionpaste;
    QAction *actionundo;
    QAction *actionredo;
    QAction *actionSave_as;
    QAction *actionCut;
    QAction *actionClear;
    QAction *actionSave;
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(399, 315);
        QIcon icon;
        icon.addFile(QStringLiteral(":/svg/accessories-text-editor.svg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/svg/document-new-symbolic.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon1);
        actionopen = new QAction(MainWindow);
        actionopen->setObjectName(QStringLiteral("actionopen"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/svg/document-open-symbolic.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionopen->setIcon(icon2);
        actionprint = new QAction(MainWindow);
        actionprint->setObjectName(QStringLiteral("actionprint"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/svg/document-print-symbolic.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionprint->setIcon(icon3);
        actionexit = new QAction(MainWindow);
        actionexit->setObjectName(QStringLiteral("actionexit"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/svg/application-exit-symbolic.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionexit->setIcon(icon4);
        actioncopy = new QAction(MainWindow);
        actioncopy->setObjectName(QStringLiteral("actioncopy"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/svg/edit-copy-symbolic.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actioncopy->setIcon(icon5);
        actionpaste = new QAction(MainWindow);
        actionpaste->setObjectName(QStringLiteral("actionpaste"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/svg/edit-paste-symbolic.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionpaste->setIcon(icon6);
        actionundo = new QAction(MainWindow);
        actionundo->setObjectName(QStringLiteral("actionundo"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/svg/edit-undo-symbolic.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionundo->setIcon(icon7);
        actionredo = new QAction(MainWindow);
        actionredo->setObjectName(QStringLiteral("actionredo"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/svg/edit-redo-symbolic.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionredo->setIcon(icon8);
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QStringLiteral("actionSave_as"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/svg/document-save-as-symbolic.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_as->setIcon(icon9);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/svg/edit-cut-symbolic.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon10);
        actionClear = new QAction(MainWindow);
        actionClear->setObjectName(QStringLiteral("actionClear"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/svg/edit-clear-all-symbolic.svg"), QSize(), QIcon::Normal, QIcon::On);
        actionClear->setIcon(icon11);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/svg/document-save-symbolic.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon12);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(9, 9, 381, 231));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(verticalLayoutWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 399, 17));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addSeparator();
        menuFile->addAction(actionopen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuFile->addSeparator();
        menuFile->addAction(actionprint);
        menuFile->addSeparator();
        menuFile->addAction(actionexit);
        menuEdit->addAction(actioncopy);
        menuEdit->addAction(actionpaste);
        menuEdit->addAction(actionCut);
        menuEdit->addSeparator();
        menuEdit->addAction(actionundo);
        menuEdit->addAction(actionredo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionClear);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionopen);
        mainToolBar->addAction(actionSave);
        mainToolBar->addAction(actionSave_as);
        mainToolBar->addAction(actionprint);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actioncopy);
        mainToolBar->addAction(actionpaste);
        mainToolBar->addAction(actionCut);
        mainToolBar->addAction(actionClear);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionundo);
        mainToolBar->addAction(actionredo);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionexit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QApplication::translate("MainWindow", "New", nullptr));
#ifndef QT_NO_SHORTCUT
        actionNew->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        actionopen->setText(QApplication::translate("MainWindow", "Open", nullptr));
#ifndef QT_NO_SHORTCUT
        actionopen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionprint->setText(QApplication::translate("MainWindow", "Print", nullptr));
#ifndef QT_NO_SHORTCUT
        actionprint->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_NO_SHORTCUT
        actionexit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
#ifndef QT_NO_SHORTCUT
        actionexit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        actioncopy->setText(QApplication::translate("MainWindow", "Copy", nullptr));
#ifndef QT_NO_SHORTCUT
        actioncopy->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
        actionpaste->setText(QApplication::translate("MainWindow", "Paste", nullptr));
#ifndef QT_NO_SHORTCUT
        actionpaste->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_NO_SHORTCUT
        actionundo->setText(QApplication::translate("MainWindow", "Undo", nullptr));
#ifndef QT_NO_SHORTCUT
        actionundo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_NO_SHORTCUT
        actionredo->setText(QApplication::translate("MainWindow", "Redo", nullptr));
#ifndef QT_NO_SHORTCUT
        actionredo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+Z", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave_as->setText(QApplication::translate("MainWindow", "Save as", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSave_as->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionCut->setText(QApplication::translate("MainWindow", "Cut", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCut->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_NO_SHORTCUT
        actionClear->setText(QApplication::translate("MainWindow", "Clear", nullptr));
#ifndef QT_NO_SHORTCUT
        actionClear->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+A", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
