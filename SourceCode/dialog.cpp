#include "dialog.h"
#include "./ui_dialog.h"
//#include "mainVmdRenamer.h"
//#include "vmd.h"
#include <windows.h>
#include <tchar.h>



Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}



void Dialog::on_buttonBox_clicked(QAbstractButton *button)
{
    hide();
}

// 表示するダイアログの文字データを格納
void Dialog::setDialogText(QString dialogString) {
    dialogText = dialogString;
    ui->textDialog->setText(dialogText);
}

