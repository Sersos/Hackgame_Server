#ifndef TCPSERVER_H
#define TCPSERVER_H

#include "Config.h"

class TCPServer
{
public:
	TCPServer();

	bool Start();

	sf::TcpListener* GetServer(); 

private:
	sf::TcpListener m_server;

};

#endif