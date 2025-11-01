#pragma once
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include "dialog.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class VMDRenamer;
}
QT_END_NAMESPACE

class VMDRenamer : public QMainWindow
{
    Q_OBJECT

public:
    VMDRenamer(QWidget *parent = nullptr);
    ~VMDRenamer();

    void setDialogWindow(Dialog* dialog);

private slots:
    void on_pushButton_released();
    void openMotionFile();

    void on_findBoneFileButton_released();

    //void on_findmotionFileButton_2_released();

    void on_findmotionFileButton_released();

    void on_runButton_released();

    void on_actionOpen_log_file_triggered();

    void on_actionDocument_triggered();



private:
    Dialog* dialogInstance;
    Ui::VMDRenamer *ui;
};
#endif // MAINWINDOW_H
