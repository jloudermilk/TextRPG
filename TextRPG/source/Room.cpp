#include "Room.h"


Room::Room()
{
}


Room::~Room()
{
}
Room::Room(char* a_roomDesc, unsigned int a_exits)
{
	roomDesc = a_roomDesc;
	exits = a_exits;
}

void Room::Display()
{

	std::cout << roomDesc;
}