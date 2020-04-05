#include "Rental.h"

Rental::Rental() {};

void Rental::add_client(Kunde k)
{
	bool in_vector = false;
	for (int i=0;i<this->clients.size();i++)
	{
		if (k.get_id() == this->clients[i].get_id())
		{
			in_vector = true;
			break;
		}
	}
	if (in_vector ==false) this->clients.push_back(k);
}

void Rental::delete_client(Kunde k)
{
	for (int i = 0; i < this->clients.size(); i++)
	{
		if (k.get_id() == this->clients[i].get_id())
		{
			this->clients.erase(this->clients.begin() + i);
			break;
		}
	}
}

void Rental::update_client(Kunde& k, std::string name)
{
	for (int i = 0; i < this->clients.size(); i++)
	{
		if (k.get_id() == this->clients[i].get_id())
		{
			clients[i].set_name(name);
			k.set_name(name);
			break;
		}
	}
}

void Rental::add_auto(Auto a)
{
	bool in_vector = false;
	for (int i = 0; i < this->autos.size(); i++)
	{
		if (a.get_id() == this->autos[i].get_id())
		{
			in_vector = true;
			break;
		}
	}
	if (in_vector == false) this->autos.push_back(a);
}

void Rental::delete_auto(Auto a)
{
	for (int i = 0; i < this->autos.size(); i++)
	{
		if (a.get_id() == this->autos[i].get_id())
		{
			this->autos.erase()
			break;
		}
	}
}