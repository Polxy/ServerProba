#include <QCoreApplication>
#include "UDPServer.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    UDPServer server;
    return a.exec();
}
