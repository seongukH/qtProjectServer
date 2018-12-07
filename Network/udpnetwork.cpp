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

   // qDebug()<<sender.toString();
   // qDebug()<<senderPort;




    QString message = Buffer;

    QStringList messageArray;

    messageArray = message.split("/");

    qDebug()<<messageArray;

    if(messageArray[0] == "sendStatus"){
        g_data->state.a_name = messageArray[1];
        g_data->state.a_x = atof(messageArray[2].toLatin1()) ;
        g_data->state.a_y = atof(messageArray[3].toLatin1()) ;
        g_data->state.a_r = atof(messageArray[4].toLatin1()) ;
        g_data->state.status = atoi(messageArray[5].toLatin1()) ;


    }else if(messageArray[0] == "sendMessage"){


    }





    Sleep(500);

    }


}
