#pragma once
#include "Character.h"
#include "Room.h"
#include <vector>
#include <map>
#include <string>

class Player :
	public Character
{
public:
	typedef void (Player::*Func)();
	Player();
	Player(char* a_name, int a_hp, int a_attack, int a_defense);
	~Player();
	void Heal();
	void Look();
	void Kill();
	void Cmd(std::vector<std::string> &tokens);
	unsigned int totalExp;
	Room * currentRoom;
	std::map<std::string, void (Player::*)()> playerCommands;


};

