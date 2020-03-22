#pragma once

template<typename T>
T sum(const T array[10], int start, int end, T Anfangswer = 10);

template<typename T>
T sum_lambda(const T array[10], int start, int end, T Anfangswer = 10);

class shape
{
	std::string name;
	int Flache;

public:
	shape(std::string name, int flache)
	{
		this->name = name;
		this->Flache = flache;
	}

	std::string get_name();
	int get_flache();
	void set_values(std::string name, int flache);
	template<typename T,typename Funktion>
	void apply(T v, Funktion f);
	void multiplizieren(int& elem, int x);
	void teilen(int& elem, int y);
	std::string into_string(shape obj);
};