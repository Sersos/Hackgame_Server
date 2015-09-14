#ifndef TCPSERVER_H
#define TCPSERVER_H

#include "Config.h"

class TCPServer
{
public:
	TCPServer();

	bool Start();

private:
	sf::TcpListener m_server;

};

#endif