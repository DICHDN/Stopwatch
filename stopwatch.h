#ifndef STOPWATCH_H
#define STOPWATCH_H

#include <QObject>
#include <QTimer>

class Stopwatch : public QObject
{
    Q_OBJECT
public:
    Stopwatch(QObject *parent = nullptr);
    void start();
    void stop();
    void reset();
    double elapsedTime() const;
    double lastTime=0;

signals:
    void timeChanged(double time);
    void stopped(double time);

private slots:
    void updateTime();

private:
    QTimer *timer;
    double timeElapsed;

};

#endif // STOPWATCH_H
