#include "PKW.h"

PKW::PKW(int id, std::string marke, std::string modell, std::string sonder) :Auto(id, marke, modell)
{
	this->sonderausstattungen = sonder;
}