#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "../../mainVmdRenamer.h"
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include "../../vmd.h"
#include <windows.h>
#include <tchar.h>
#include <stdio.h>
#include <strsafe.h>
#include <shellapi.h>
#include <objbase.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_released()
{



    //std::cout << mainVmdRenamer(vmdPath, filePath, transformScale) << std::endl;
}

void MainWindow::openMotionFile()
{
    QString filePath = QFileDialog::getOpenFileName();
    ui->fileNameLineEdit->setText(filePath);
}


void MainWindow::on_findBoneFileButton_released()
{
    QString filePath = QFileDialog::getOpenFileName();
    ui->fileNameLineEdit_2->setText(filePath);
}


void MainWindow::on_findmotionFileButton_released()
{
    QString vmdPath = QFileDialog::getOpenFileName();
    ui->fileNameLineEdit->setText(vmdPath);
}


std::string printLogContent(char* path) {
    // C++のファイル入力のための準備
    std::ifstream ifs(path, std::ios::in);
    std::string message;
    // ファイルを開くのに失敗したときの処理
    if(!ifs){
        message = "Error: log file not opened.";
        return message;
    }

    std::string lineString;
    while(getline(ifs, lineString)) {
        message += lineString + "/n";
    }
    return message;
}


void MainWindow::on_runButton_released()
{

    std::string argString;
    char* log_path = (char*)"./log/.log";
    QString vmdPathStr = ui->fileNameLineEdit->text();

    std::string vmdPath = vmdPathStr.toStdString();
    cout << "vmdPath: " << vmdPath << endl;

    QString filePathStr = ui->fileNameLineEdit_2->text();

    std::string filePath = filePathStr.toStdString();

    int transformScale = ui->scaleBox->value();
    cout << "filePath: " << filePath << endl;

    int convertResult = mainVmdRenamer(vmdPath.c_str(), filePath.c_str(), transformScale);
    if(convertResult) {
        QString logPathQString = QString::fromStdString(printLogContent(log_path));
        std::cout << logPathQString.toStdString() << std::endl;

        switch(convertResult) {
        case -1:
            ui->resultLabel->setText("変換失敗。ログファイルを開けません。");
            break;
        case 1:
            ui->resultLabel->setText("変換失敗。csvファイルを開けません。");
            break;
        case 2:
            ui->resultLabel->setText("変換失敗。csvファイル内のボーン名が不正です。詳細はログをご確認ください。");
            break;
        case 3:
            ui->resultLabel->setText("変換失敗。vmdファイルを開けません。");
            break;
        default:
            ui->resultLabel->setText("変換失敗。予期せぬエラーが発生しました。");
        }
    } else {
        ui->resultLabel->setText("変換成功");
    }

}

void MainWindow::on_actionOpen_log_file_triggered()
{
    PROCESS_INFORMATION processsInfo;
    STARTUPINFO startupInfo;
    startupInfo.cb = sizeof(startupInfo);
    ZeroMemory(&startupInfo, sizeof(startupInfo));
    wchar_t commandLine[] = L"notepad.exe log/.log";

    if(CreateProcess(NULL, commandLine,
 NULL, NULL, FALSE, 0, NULL, NULL, &startupInfo, &processsInfo)) {
        std::cerr << "プロセスの起動に失敗しました。" << std::endl;
    }
}


void MainWindow::on_actionDocument_triggered()
{
    ShellExecute(
        GetDesktopWindow(),
        L"open",
        TEXT("https://github.com/Rengetsu3777/VMD_Renamer_Ver2.0"),
        L"", // LPCTSTR lpParameters
        L"", // LPCSTR lpDirectory
        SW_SHOW
    );
}

