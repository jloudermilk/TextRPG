#include "Race.h"


Race::Race()
{
	commands["look"] = new LookCommand();

}


Race::~Race()
{
}
void Race::receive(std::string message)
{
	
	std::map<std::string, Command*>::iterator it = commands.find(message);
	
	if (it != commands.end())
	{
		it->second->execute();
	}
	


}