#include "UDPServer.h"
UDPServer::UDPServer(QObject *parent) :QObject(parent),socketServer(this)
{
    qDebug()<<"I am UDP server, listening on 9999";
    // Listen to 9999 port server
    socketServer.bind(QHostAddress("192.168.153.1"),9999 );
    connect(&socketServer,SIGNAL(readyRead()),this,SLOT(readReady()));

}

void UDPServer::readReady()
{
    QByteArray buffer;
    buffer.resize(socketServer.pendingDatagramSize());
    QHostAddress sender;
    quint16 port;
    socketServer.readDatagram(buffer.data(),buffer.size(),&sender,&port);
    qDebug()<<"Datagram Recieved From";
    qDebug()<<"Client IP" << sender.toString();
    qDebug()<<"Client Port Number " << port;
    qDebug()<<"\n\n";

    // Write to the client,need to specify the client port number.
    QByteArray clientData;
    clientData.append( "data");
    socketServer.writeDatagram( clientData, QHostAddress("192.168.153.1"), port );
}
