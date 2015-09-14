#include <iostream>
#include <SFML\Network.hpp>

#define SERVER_IP "127.0.0.1"
#define SERVER_PORT 8001

#define LOG_INFO(text) { std::cout << "Info: " << text << std::endl; }
#define LOG_WARNING(x) { std::cout << "Warning: " << x << std::endl; }
#define LOG_ERROR(x) { std::cout << "ERROR: " << x << std::endl; }