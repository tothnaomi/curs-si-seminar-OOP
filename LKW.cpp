#include "LKW.h"

LKW::LKW(int id, std::string marke, std::string modell, double gesamt, double bezeichnung) :Auto(id, marke, modell)
{
	/* LKW l(0, "BMW", "modell", 23, 5); */
	this->gesamtgewicht = gesamt;
	this->bezeichnung = bezeichnung;
}

void LKW::load(double x)
{
	this->gesamtgewicht = this->gesamtgewicht + x;
}

void LKW::unload(double x)
{
	this->gesamtgewicht = this->gesamtgewicht - x;
}