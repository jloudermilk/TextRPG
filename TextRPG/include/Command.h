//#include "Character.h"

//class Character;

#ifndef _COMMAND_H_
#define _COMMAND_H_



class Command
{
public:
	virtual ~Command(){};
	virtual void execute() = 0;
};

#endif //_COMMAND_H_