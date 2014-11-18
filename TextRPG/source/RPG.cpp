#include "RPG.h"


RPG::RPG()
{
	Room* start = new Room(
		"Equius welcomes you lovingly to Victory Square, citizen.  The sounds of \n"
		"quarrels, street hawkers, and the shouts of children chasing orange peels over \n"
		"the cobblestones caress your ears.Victory Square is the pride of our city, a\n"
		"ravine of tall leprous buildings lurching towards one another in queer\n"
		"attitudes as though frozen in the act of collapse.\n", 
		NORTH|SOUTH|EAST|WEST);
	rooms.push_back(start);
	
	Character* beggar = new NPC("Shabby beggar", 10, 2, 1, 100);
	player = new Player("Nimdraug", 100, 4, 1);
	dynamic_cast<Player*>(player)->currentRoom = start;

	start->inRoom.push_back(beggar);
	start->inRoom.push_back(player);

	
}


RPG::~RPG()
{
}

void RPG::Run()
{
	dynamic_cast<Player*>(player)->Look();
	do
	{
		std::getline(std::cin, playerInput);
		ParsePlayerInput();

	} while (!gameOver);
}
void RPG::DisplayRoom(Character* a){}
void RPG::Combat(Character* a, Character* b){}
void RPG::MoveRoom(char*){}
void RPG::ParsePlayerInput()
{
	std::istringstream iss(playerInput);
	copy(std::istream_iterator<std::string>(iss),
		std::istream_iterator<std::string>(),
		back_inserter(tokens));

	if (tokens.size() != 0){
		dynamic_cast<Player*>(player)->Cmd(tokens);
	}
	else
	{
		std::cout << "What? \n";
	}
	tokens.clear();
	
}
