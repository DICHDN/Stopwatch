#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), roundCount(0) {
    ui->setupUi(this);
    stopwatch = new Stopwatch(this);

    connect(stopwatch, &Stopwatch::timeChanged, this, &MainWindow::updateTimeDisplay);
    connect(stopwatch, &Stopwatch::stopped, this, &MainWindow::handleStop);

}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_pB_StrStp_clicked() {
    if (ui->pB_StrStp->text() == "Старт") {
        ui->pB_StrStp->setText("Стоп");
        ui->pB_Round->setEnabled(true);
        stopwatch->start();
    } else {
        ui->pB_StrStp->setText("Старт");
        ui->pB_Round->setEnabled(false);
        stopwatch->stop();
    }
}

void MainWindow::on_pB_Clear_clicked() {
    stopwatch->reset();
    ui->lb_time->setText("0.0");
    ui->tE_TmRound->clear();
    roundCount = 0;
    ui->pB_StrStp->setText("Старт");
    ui->pB_Round->setEnabled(false);
}

void MainWindow::on_pB_Round_clicked() {
    roundCount++;
    double roundTime = stopwatch->elapsedTime();
    stopwatch->lastTime= roundTime + stopwatch->lastTime ;
    ui->tE_TmRound->append(QString("Круг %1, время: %2").arg(roundCount).arg(roundTime));
}

void MainWindow::updateTimeDisplay(double time) {
    ui->lb_time->setText(QString::number(time, 'f', 1) );
}
void MainWindow::handleStop(double time) {
    ui->tE_TmRound->append(QString("Остановка в %1 ").arg(time, 0, 'f', 1));
}

