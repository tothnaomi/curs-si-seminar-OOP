#include "Kunde.h"

Kunde::Kunde(int id, std::string name)
{
	this->id = id;
	this->name = name;
}

int Kunde::get_id()
{
	return this->id;
}

std::string Kunde::get_name()
{
	return this->name;
}

void Kunde::set_id(int)
{
	this->id = id;
}

void Kunde::set_name(std::string name)
{
	this->name = name;
}