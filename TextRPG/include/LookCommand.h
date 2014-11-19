#pragma once
#include "Command.h"
#include <iostream>
class LookCommand :
	public Command
{
public:
	
	virtual void execute();
	void Look();
};

