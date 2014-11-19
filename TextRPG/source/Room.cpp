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
void Room::receive(std::string message) 
{
}
void Room::Display()
{

	std::cout << roomDesc << std::endl << std::endl;
	
	std::string visableExits;

	if (NORTH & exits)
		visableExits += " north";
	if (SOUTH & exits)
		visableExits += " south";
	if (EAST & exits)
		visableExits += " east";
	if (WEST & exits)
		visableExits += " west";
	if (NORTHEAST & exits)
		visableExits += " northeast";
	if (NORTHWEST & exits)
		visableExits += " northwest";
	if (SOUTHEAST & exits)
		visableExits += " southeast";
	if (SOUTHWEST & exits)
		visableExits += " southwest";
	if (NOEXIT & exits )
	{
		std::cout << "There are no visable exits." << std::endl << std::endl;
	}
	else{
		std::cout << "There are exits to the" << visableExits;
	}

	std::cout << std::endl << std::endl;

	std::string visableCharacters;
	
	std::cout << visableCharacters;
	std::cout << std::endl << std::endl;

}