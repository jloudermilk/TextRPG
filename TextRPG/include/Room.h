#pragma once
#include <vector>
#include "Character.h"
#include <iostream>
#include <string>
enum Exits
{
		NOEXIT		= 0x00,		//0x00000000
		NORTH		= 0x01,		//0x00000001
		SOUTH		= 0x02,		//0x00000010
		EAST		= 0x04,		//0x00000100
		WEST		= 0x08,		//0x00001000
		NORTHEAST	= 0x10,		//0x00010000
		NORTHWEST	= 0x20,		//0x00100000
		SOUTHEAST	= 0x40,		//0x01000000
		SOUTHWEST	= 0x80		//0x10000000

		
};

class Room
{
public:
	Room();
	Room(char* a_roomDesc, unsigned int a_exits);

	~Room();

	void Display();
	unsigned int exits;
	char* roomDesc;
	
	std::vector<Character*> inRoom;
};

