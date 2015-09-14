#include "Client.h"

Client::Client(unsigned short id,
			   const char* ipAddress)
{
	m_id = id;
	m_ipAddress = ipAddress;
}

unsigned short Client::GetId()
{
	return m_id;
}