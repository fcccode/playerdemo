#include <QDebug>
#include "videodec.h"


VideoDec::VideoDec()
{

}

void VideoDec::run()
{
    while (m_bRunning)
    {
        qDebug() << "VideoDec Thread ID:" << QThread::currentThreadId();
        break;
    }
}

void VideoDec::OnStartDec()
{
    StartThread();
}