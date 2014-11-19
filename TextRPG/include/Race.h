#ifndef _RACE_H_
#define _RACE_H_
#include "Component.h"
#include "LookCommand.h"
enum Sex 
{
	MALE = 0,
	FEMALE,
	NEUTER
};
class Race :
	public Component
{
public:
	Race();
	~Race();
	void receive(std::string message);
	unsigned int 
		strength,
		dexterity, 
		intelligence, 
		constitution, 
		wisdom, 
		charisma;
	int currentHP;
	int totalHP;
	int currentSP;
	int totalSP;
	int currentMP;
	int totalMP;
	char* name;
	int attack;
	int defense;
	bool isAlive;
	Sex gender;
};
#endif _RACE_H_

