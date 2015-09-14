#include "TCPServer.h"

TCPServer::TCPServer()
{

}

bool TCPServer::Start()
{
	if (sf::Socket::Done == m_server.listen(SERVER_PORT))	{
		LOG_INFO("Server start on Port " << SERVER_PORT);
		return true;
	}
	else {
		LOG_ERROR("Cant start server");
		return false;
	}
}