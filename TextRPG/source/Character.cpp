#include "Character.h"

Character::Character()
{
}


Character::~Character()
{
}
Character::Character(char* a_name, int a_hp, int a_attack, int a_defense)
{
	name = a_name; 
	hp = a_hp;
	attack = a_attack;
	defense = a_defense;
}
void Character::Die()
{
	isAlive = false;
}
