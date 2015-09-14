#ifndef CLIENT_H
#define CLIENT_H

#include <SFML\Network.hpp>

class Client
{
public:
	Client(unsigned short id,
		   const char* ipAddress);

	inline unsigned short GetId();

private:
	unsigned short m_id;
	const char* m_ipAddress;

	sf::Socket* m_client;

};

#endif