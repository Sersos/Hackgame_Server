#include <iostream>
#include <SFML\Network.hpp>

const char* SERVER_IP = "127.0.0.1";
const int   SERVER_PORT = 8001;

#define LOG_INFO { std::cout << "Info: " << x << std::endl; }
#define LOG_WARNING(x) { std::cout << "Warning: " << x << std::endl; }
#define LOG_ERROR(x) { std::cout << "ERROR: " << x << std::endl; }