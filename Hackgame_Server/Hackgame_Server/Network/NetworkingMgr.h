#ifndef NETWORKINGMGR_H
#define NETWORKINGMGR_H

#include <vector>

class Client;

class NetworkingMgr
{
public:
	NetworkingMgr();


private:
	std::vector <Client*> m_clientList;

};

#endif