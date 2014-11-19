//#include "Character.h"

//class Character;
#include "GameObject.h"
class GameObject;
#ifndef _COMMAND_H_
#define _COMMAND_H_



class Command
{
public:
	virtual ~Command(){};
	virtual void execute(GameObject& obj) = 0;
};

#endif //_COMMAND_H_