#pragma once
#include "Auto.h"

class LKW : public Auto // a Zugriffmodifikatorok ugyanazok maradnak
{
	int id;
	std::string marke;
	std::string modell;
	double gesamtgewicht, bezeichnung;

private:
	LKW(int id, std::string marke, std::string modell, double gesamt, double bezeichnung);

	void load(double);

	void unload(double);
};