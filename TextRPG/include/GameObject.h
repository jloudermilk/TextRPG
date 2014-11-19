#ifndef _GAMEOBJECT_H_
#define _GAMEOBJECT_H_
#include <vector>
#include "Component.h"
class GameObject
{
public:
	GameObject();
	~GameObject();
	bool AddComponent(Component* comp);
	void Send(std::string message);
private:
	std::vector<Component*> components;
};
#endif //_GAMEOBJECT_H_
