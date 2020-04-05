#pragma once
#include "Auto.h"
#include "Kunde.h"
#include "LKW.h"
#include "PKW.h"
#include "Rental.h"
#include <vector>

class Rental 
{
	std::vector<Auto> autos;
	std::vector<Kunde> clients;

public:

	void add_client(Kunde k);

	void delete_client(Kunde k);

	void update_client(Kunde& k, std::string name); // ahol ki kell cserelje oda kell &

	void add_auto(Auto a);

	void delete_auto(Auto a);
};