#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "stopwatch.h"

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
    void on_pB_StrStp_clicked();
    void on_pB_Clear_clicked();
    void on_pB_Round_clicked();
    void updateTimeDisplay(double time);
    void handleStop(double time);

private:
    Ui::MainWindow *ui;
    Stopwatch *stopwatch;
    int roundCount;
    double lastTime=0; // сумма времени отсчитаных кругов.
};
#endif // MAINWINDOW_H
