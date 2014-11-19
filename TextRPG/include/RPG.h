#ifndef _RPG_H_
#define _RPG_H_
#include "Room.h"
#include "GameObject.h"
#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>


class RPG
{
public:
	RPG();
	~RPG();

	void Run();
	void MoveRoom(char*);
	void ParsePlayerInput();


	bool gameOver;

	std::vector<Room*> rooms;
	std::vector<std::string> tokens;
	std::string playerInput;
	GameObject * player;
	


};
#endif //_RPG_H_
