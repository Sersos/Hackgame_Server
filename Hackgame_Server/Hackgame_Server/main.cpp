
#include <SFML\Network.hpp>
#include "Config.h"

int main()
{
	sf::TcpListener server;
	server.listen(SERVER_PORT);
	
	return 0;
}