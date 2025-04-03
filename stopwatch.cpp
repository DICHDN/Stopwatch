#include "stopwatch.h"

Stopwatch::Stopwatch(QObject *parent) : QObject(parent), timeElapsed(0) {
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &Stopwatch::updateTime);
}

void Stopwatch::start() {
    timer->start(100); // обновление каждые 0.1 сек
}

void Stopwatch::stop() {
    timer->stop();
    emit stopped(timeElapsed);
}

void Stopwatch::reset() {
    stop();
    timeElapsed = 0;
    emit timeChanged(timeElapsed);
}

double Stopwatch::elapsedTime() const {
    return timeElapsed-lastTime;
}

void Stopwatch::updateTime() {
    timeElapsed += 0.1;
    emit timeChanged(timeElapsed);
}
