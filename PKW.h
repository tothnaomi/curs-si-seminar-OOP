#pragma once
#include <string>
#include "Auto.h"

class PKW : public Auto
{
	std::string sonderausstattungen;

public:
	PKW(int, std::string, std::string, std::string);
};