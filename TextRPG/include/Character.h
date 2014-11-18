#pragma once


#include <iostream>
class Character
{
public:
	Character();
	Character(char* a_name,int a_hp,int a_attack,int a_defense);
	virtual ~Character();
	void Die();
	char* name;
	int hp;
	int attack;
	int defense;
	bool isAlive;
};

