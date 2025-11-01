/********************************************************************************
** Form generated from reading UI file 'vmdrenamer.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VMDRENAMER_H
#define UI_VMDRENAMER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VMDRenamer
{
public:
    QAction *actionOpen;
    QAction *actionQuit;
    QAction *actionDocument;
    QAction *actionOpen_log_file;
    QWidget *centralwidget;
    QPushButton *runButton;
    QLabel *textLabelResult;
    QLabel *resultLabel;
    QLabel *textLabelScale;
    QLabel *textLabelScale_2;
    QLabel *textLabelScale_3;
    QLineEdit *fileNameLineEdit;
    QSpinBox *scaleBox;
    QLineEdit *fileNameLineEdit_2;
    QLabel *textLabelScale_4;
    QPushButton *findBoneFileButton;
    QPushButton *findmotionFileButton;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *VMDRenamer)
    {
        if (VMDRenamer->objectName().isEmpty())
            VMDRenamer->setObjectName("VMDRenamer");
        VMDRenamer->resize(352, 246);
        actionOpen = new QAction(VMDRenamer);
        actionOpen->setObjectName("actionOpen");
        actionQuit = new QAction(VMDRenamer);
        actionQuit->setObjectName("actionQuit");
        actionDocument = new QAction(VMDRenamer);
        actionDocument->setObjectName("actionDocument");
        actionOpen_log_file = new QAction(VMDRenamer);
        actionOpen_log_file->setObjectName("actionOpen_log_file");
        centralwidget = new QWidget(VMDRenamer);
        centralwidget->setObjectName("centralwidget");
        runButton = new QPushButton(centralwidget);
        runButton->setObjectName("runButton");
        runButton->setGeometry(QRect(90, 160, 171, 31));
        textLabelResult = new QLabel(centralwidget);
        textLabelResult->setObjectName("textLabelResult");
        textLabelResult->setGeometry(QRect(60, 100, 71, 21));
        resultLabel = new QLabel(centralwidget);
        resultLabel->setObjectName("resultLabel");
        resultLabel->setGeometry(QRect(140, 100, 171, 51));
        resultLabel->setMaximumSize(QSize(171, 51));
        resultLabel->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        resultLabel->setWordWrap(true);
        textLabelScale = new QLabel(centralwidget);
        textLabelScale->setObjectName("textLabelScale");
        textLabelScale->setGeometry(QRect(50, 70, 81, 21));
        textLabelScale_2 = new QLabel(centralwidget);
        textLabelScale_2->setObjectName("textLabelScale_2");
        textLabelScale_2->setGeometry(QRect(40, 10, 101, 21));
        textLabelScale_3 = new QLabel(centralwidget);
        textLabelScale_3->setObjectName("textLabelScale_3");
        textLabelScale_3->setGeometry(QRect(250, 70, 51, 21));
        fileNameLineEdit = new QLineEdit(centralwidget);
        fileNameLineEdit->setObjectName("fileNameLineEdit");
        fileNameLineEdit->setGeometry(QRect(140, 10, 131, 20));
        scaleBox = new QSpinBox(centralwidget);
        scaleBox->setObjectName("scaleBox");
        scaleBox->setGeometry(QRect(140, 70, 101, 22));
        scaleBox->setMaximum(10000);
        scaleBox->setValue(100);
        scaleBox->setDisplayIntegerBase(10);
        fileNameLineEdit_2 = new QLineEdit(centralwidget);
        fileNameLineEdit_2->setObjectName("fileNameLineEdit_2");
        fileNameLineEdit_2->setGeometry(QRect(140, 40, 131, 20));
        textLabelScale_4 = new QLabel(centralwidget);
        textLabelScale_4->setObjectName("textLabelScale_4");
        textLabelScale_4->setGeometry(QRect(50, 40, 81, 21));
        findBoneFileButton = new QPushButton(centralwidget);
        findBoneFileButton->setObjectName("findBoneFileButton");
        findBoneFileButton->setGeometry(QRect(270, 40, 41, 21));
        findmotionFileButton = new QPushButton(centralwidget);
        findmotionFileButton->setObjectName("findmotionFileButton");
        findmotionFileButton->setGeometry(QRect(270, 10, 41, 21));
        VMDRenamer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(VMDRenamer);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 352, 20));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        VMDRenamer->setMenuBar(menubar);
        statusbar = new QStatusBar(VMDRenamer);
        statusbar->setObjectName("statusbar");
        VMDRenamer->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(actionOpen);
        menu->addAction(actionOpen_log_file);
        menu->addAction(actionQuit);
        menu_2->addAction(actionDocument);

        retranslateUi(VMDRenamer);
        QObject::connect(actionQuit, &QAction::triggered, VMDRenamer, qOverload<>(&QMainWindow::close));
        QObject::connect(actionOpen, SIGNAL(triggered()), VMDRenamer, SLOT(openMotionFile()));

        QMetaObject::connectSlotsByName(VMDRenamer);
    } // setupUi

    void retranslateUi(QMainWindow *VMDRenamer)
    {
        VMDRenamer->setWindowTitle(QCoreApplication::translate("VMDRenamer", "VMDRenamer", nullptr));
        actionOpen->setText(QCoreApplication::translate("VMDRenamer", "Open", nullptr));
        actionQuit->setText(QCoreApplication::translate("VMDRenamer", "Quit", nullptr));
        actionDocument->setText(QCoreApplication::translate("VMDRenamer", "Document", nullptr));
        actionOpen_log_file->setText(QCoreApplication::translate("VMDRenamer", "Open log file", nullptr));
        runButton->setText(QCoreApplication::translate("VMDRenamer", "\345\256\237\350\241\214", nullptr));
        textLabelResult->setText(QCoreApplication::translate("VMDRenamer", "\345\256\237\350\241\214\347\265\220\346\236\234 \357\274\232 ", nullptr));
        resultLabel->setText(QCoreApplication::translate("VMDRenamer", "\346\234\252\345\256\237\350\241\214", nullptr));
        textLabelScale->setText(QCoreApplication::translate("VMDRenamer", "\343\202\271\343\202\261\343\203\274\343\203\253\345\200\215\347\216\207 \357\274\232", nullptr));
        textLabelScale_2->setText(QCoreApplication::translate("VMDRenamer", "\343\203\242\343\203\274\343\202\267\343\203\247\343\203\263\343\203\225\343\202\241\343\202\244\343\203\253\357\274\232", nullptr));
        textLabelScale_3->setText(QCoreApplication::translate("VMDRenamer", "\345\200\215", nullptr));
        textLabelScale_4->setText(QCoreApplication::translate("VMDRenamer", "\343\203\234\343\203\274\343\203\263\345\257\276\345\277\234\350\241\250\357\274\232", nullptr));
        findBoneFileButton->setText(QCoreApplication::translate("VMDRenamer", "\345\217\202\347\205\247", nullptr));
        findmotionFileButton->setText(QCoreApplication::translate("VMDRenamer", "\345\217\202\347\205\247", nullptr));
        menu->setTitle(QCoreApplication::translate("VMDRenamer", "\343\203\225\343\202\241\343\202\244\343\203\253", nullptr));
        menu_2->setTitle(QCoreApplication::translate("VMDRenamer", "\343\203\230\343\203\253\343\203\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VMDRenamer: public Ui_VMDRenamer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VMDRENAMER_H
