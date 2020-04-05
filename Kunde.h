#pragma once
#include <string>

class Kunde
{
	int id;
	std::string name;

public:
	Kunde(int, std::string);

	int get_id();

	std::string get_name();

	void set_id(int);

	void set_name(std::string name);
};