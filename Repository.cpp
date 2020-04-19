#include "Repository.h"
#include <iostream>
#include "Auto.h"

Auto* AutoInMemory::findOne(int id)
{
	for (int i = 0; i < this->autos.size(); i++)
	{
		if (this->autos[i]->get_id() == id)
			return (this->autos[i]);
	}
	return nullptr;
}

std::vector<Auto*> AutoInMemory::findAll()
{
	return this->autos;
}

Auto* AutoInMemory::save(Auto* aut)
{
	//@return ​null - if the given entity is saved otherwise returns the entity(id already exists
	for (int i = 0; i < this->autos.size(); i++)
	{
		if (autos[i] == aut)
			return this->autos[i];
	}
	this->autos.push_back(aut);
	return nullptr;
}

Auto* AutoInMemory::del(int id)
{
	for (int i = 0; i<this->autos.size();i++)
	{
		if (this->autos[i]->get_id() == id)
		{
			Auto* temp = this->autos[i];
			this->autos.erase(this->autos.begin() + i);
			return temp;
		}
	}
	return nullptr; // if there is no auto with this id
}

Auto* AutoInMemory::update(Auto* aut)
{
	if (del(aut->get_id()) == nullptr)
		return nullptr;
	
	del(aut->get_id());
	save(aut);
}

