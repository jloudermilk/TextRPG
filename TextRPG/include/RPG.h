#pragma once
#include "Room.h"
#include "Character.h"
#include "Player.h"
#include "NPC.h"
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
	void DisplayRoom(Character* a);
	void Combat(Character* a, Character* b);
	void MoveRoom(char*);
	void ParsePlayerInput();


	bool gameOver;

	Character* player;
	std::vector<Room*> rooms;
	std::vector<std::string> tokens;
	std::string playerInput;
	


};

