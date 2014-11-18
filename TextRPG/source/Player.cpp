#include "Player.h"


Player::Player()
{
}


Player::~Player()
{
}

Player::Player(char* a_name, int a_hp, int a_attack, int a_defense)
: Character(a_name, a_hp, a_attack, a_defense)
{
	totalExp = 0;
	playerCommands["heal"] = &Player::Heal;
	playerCommands["look"] = &Player::Look;
}

void Player::Cmd(std::vector<std::string> &tokens)
{
	std::string str = tokens[0];
	std::map<std::string, void (Player::*)()>::iterator it = playerCommands.find(str);

	Func fun;
	if (it != playerCommands.end())
	{
		
		fun = it->second;
		fun();
	}
	else
	{
		std::cout << "What? \n";
	}


}
void Player::Heal()
{
	hp = 100;
	std::cout << "You heal for 100 hp \n";
}
void Player::Look()
{
	currentRoom->Display();

}

