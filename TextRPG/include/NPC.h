#pragma once
#include "Character.h"
class NPC :
	public Character
{
public:
	NPC();
	NPC(char* a_name, int a_hp, int a_attack, int a_defense, unsigned int a_exp);
	~NPC();
	unsigned int exp;
};

