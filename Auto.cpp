#include "Auto.h"

Auto::Auto() {};

Auto::Auto(int id, std::string marke, std::string modell)
{
	this->id = id;
	this->marke = marke;
	this->modell = modell;
}

int Auto::get_id() { return this->id; }

std::string Auto::get_marke() { return this->marke; }

std::string Auto::get_modell() { return this->modell; }

void Auto::set_id(int id)
{
	this->id = id;
}

void Auto::set_marke(std::string marke)
{
	this->marke = marke;
}

void Auto::set_modell(std::string modell)
{
	this->modell = modell;
}