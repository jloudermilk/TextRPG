#ifndef _COMPONENT_H_
#define _COMPONENT_H_
#include <string>
#include <map>
#include <vector>
#include "Command.h"


class Component
{
public:
	virtual ~Component(){};
	virtual void receive(std::string message) =0;

	std::map<std::string, Command*> commands;
};
#endif //_COMPONENT_H_
