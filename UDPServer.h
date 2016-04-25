#ifndef UDPSERVER_H
    #define UDPSERVER_H
    #include <QObject>
    #include <QUdpSocket>

    class UDPServer : public QObject
    {
        Q_OBJECT
    public:
        explicit UDPServer(QObject *parent = 0);
        void WriteData( const QString& );

    public slots:
        void readReady();
    private:
        QUdpSocket socketServer;

    };
    #endif // UDPSERVER_H
