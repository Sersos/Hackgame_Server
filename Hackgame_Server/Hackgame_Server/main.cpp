#include "TCPServer.h"

int main()
{
	TCPServer server;
	server.Start();

	std::cin.get();
	
	return 0;
}