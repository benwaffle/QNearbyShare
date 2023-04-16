//
// Created by victor on 15/04/23.
//

#ifndef QNEARBYSHARE_NEARBYSHARESERVER_H
#define QNEARBYSHARE_NEARBYSHARESERVER_H

#include <QObject>

struct NearbyShareServerPrivate;
class NearbyShareServer : public QObject {
    Q_OBJECT
public:
    NearbyShareServer();
    ~NearbyShareServer();

    void start();
    void stop();

private:
    NearbyShareServerPrivate* d;

    void acceptPendingConnection();
};


#endif//QNEARBYSHARE_NEARBYSHARESERVER_H
