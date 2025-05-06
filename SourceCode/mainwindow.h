#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

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
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
