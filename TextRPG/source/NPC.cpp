#include "NPC.h"


NPC::NPC()
{
}


NPC::~NPC()
{
}
NPC::NPC(char* a_name, int a_hp, int a_attack, int a_defense, unsigned int a_exp) 
: Character(a_name, a_hp, a_attack, a_defense)
{
	exp = a_exp;
}