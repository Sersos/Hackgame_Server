#include "TCPServer.h"

bool isRunning = false;

int main()
{
	//start TCP Server, listen on port (look Config.h)
	TCPServer server;
	if (server.Start())	{
		isRunning = true;
	}

	while (isRunning)
	{
		std::string command;		
		LOG_INFO("You can enter a command (for command list type 'help'): ");		
		std::cin >> command;

		if (command == "help") //help list
		{
			LOG_INFO("'close' (close the application)");			
		}
		else if (command == "close") //close application
		{
			isRunning = false;
		}
	}	
	
	return 0;
}