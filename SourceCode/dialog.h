#pragma once
#ifndef DIALOG_H
#define DIALOG_H

#include <QMainWindow>
#include <QFileDialog>
#include <QAbstractButton>


////////////////////////////////////////////////////
// Class: Dialog
//  Qtと連携し、出力結果やエラー状態を詳細に説明するウィンドウのクラス。
////////////////////////////////////////////////////

QT_BEGIN_NAMESPACE
namespace Ui {
class Dialog;
}
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

    void setDialogText(QString dialogString); // 表示するダイアログの文字データを格納

private slots:

    void on_buttonBox_clicked(QAbstractButton *button);

private:
    QString dialogText;

    Ui::Dialog *ui;
};
#endif // DIALOG_H
