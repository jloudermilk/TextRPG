#include "GameObject.h"


GameObject::GameObject()
{
	
}


GameObject::~GameObject()
{
}


bool GameObject::AddComponent(Component* comp)
{
	components.push_back(comp);
	return true;
}
void GameObject::Send(std::string message)
{
	for (int i = 0; i < components.size(); i++)
	{
		components[i]->receive(message);
	}
}


