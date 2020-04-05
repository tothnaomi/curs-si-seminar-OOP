#pragma once
#include <string>

class Auto
{
private:
	int id;
	std::string marke, modell;
public:
	Auto();

	Auto(int id, std::string marke, std::string modell);

	int get_id();

	std::string get_marke();

	std::string get_modell();

	void set_id(int id);

	void set_marke(std::string marke);

	void set_modell(std::string modell);
};