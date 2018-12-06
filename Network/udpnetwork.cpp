#include "udpnetwork.h"

#include <windows.h>
UDPNetwork::UDPNetwork(QObject *parent) : QObject(parent)
{
    socket = new QUdpSocket(this);
    socket->bind(QHostAddress::LocalHost, 1234);
    connect (socket, SIGNAL(readyRead()), this, SLOT(readyRead()));
}

//-----------------------------
//send udp
//-----------------------------

void UDPNetwork::sendMessage()
{

}


//-----------------------------
//recv udp
//-----------------------------

void UDPNetwork::readyRead(){

    while(1){

    QByteArray Buffer;
    Buffer.resize(socket->pendingDatagramSize());

    QHostAddress sender;
    quint16 senderPort;
    socket->readDatagram(Buffer.data(), Buffer.size(), &sender, &senderPort);

    qDebug()<<sender.toString();
    qDebug()<<senderPort;

    qDebug()<<Buffer;


    Sleep(1000);

    }


}
