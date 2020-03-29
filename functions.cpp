#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <cassert>
using namespace std;

// 1------------------------------------------------------------------------------
char* strfind(const char* s, const char* f)
{
	// const because I can only read from the string, I can not modify it 
	// search for the first matching character
	while (*s != '\0')
	{
		if (*s == *f)
			break;
		else 
			s++;
	}
	char* ptr = const_cast<char*>(s); // here is the first matching character
	// s and ptr points to the first matching character 
	s++; f++;
	while (*f != '\0' || *s != '\0')
	{
		if (*s != *f) return nullptr;
		else
		{
			s++; f++; 
		}
	}
	return ptr;
}

// 2------------------------------------------------------------------------------
struct Struktur
{
	/* the most effecient way is when the members are sorted in descendent order, because of the padding. 
	Descendet order: 32, 
	https://www.geeksforgeeks.org/is-sizeof-for-a-struct-equal-to-the-sum-of-sizeof-of-each-member/ */
	
	long double e6 = 12546.78945; // 16 byte
	long e4 = 1547821; // 8 bytes
	double e5 = 2.1; // 8 bytes
	int i = 5; // 4 bytes
	bool e1 = true; // 1 byte
	char e2 = 'e'; // 1 byte
};

// 3--------------------------------------------------------------------------------
void zeiger()
{
	Struktur* p, elem;
	p = &elem;
	//++p->i;  increments the value of int i
	//p++->i; std::cout << p->i;  increments the ptr and than return a value from the memory
	//*p->i; dereferencing the ptr first and than return the i value 
	//*p->i++; dereferencing the ptr, than incrementing the value i 
	//(*p->i)++ dereferencing the ptr, than incrementing the i
	//(*p++->i) dereferencing the ptr, incrementing the ptr, return the value i 
}

// 4-------------------------------------------------------------------------------
unsigned int lange(const char* ptr)
{
	unsigned int length = 0;
	while (*ptr != '\0')
	{
		length++;
		ptr++;
	}
	return length;
}

char* copy_(const char* str1, const char* str2, int index)
{
	// erstellt eine neue Zeichenkette
	string neue = "";
	char* neue_ptr = &neue[0];
	while (index>0)
	{
		*neue_ptr = *str1;
		neue_ptr++; str1++; index--;
	}
	while (*str2 != '\0')
	{
		*neue_ptr = *str2;
		neue_ptr++; str2++;
	}
	while (*str1 != '\0')
	{
		*neue_ptr = *str1;
		neue_ptr++; str1++;
	}
	neue_ptr = &neue[0];
	return neue_ptr;
}

// 6------------------------------------------------------------------------------
class Account
{
private:
	std::string name;
	double geld = 0;
	double Kontostand();
public:
	void Bezahlen(const double& Betrag);
	void Einzahlung(const double& Betrag);
	void in_file(int choose, double n);
	void read_from_file();
	
};

void Account::Bezahlen(const double& Betrag)
{
	this->geld -= Betrag;
}

void Account::Einzahlung(const double& Betrag)
{
	this->geld += Betrag;
}

double Account::Kontostand()
{
	return this->geld;
}

// 7----------------------------------------------------------------
void Account::in_file(int choose, double n)
{
	fstream f;
	f.open("datei", ios::app);
	if (choose == 0)
	{
		// Bezahlen
		f << "OUT " << n;
		Bezahlen(n);
		f << " " << geld<<"\n";
	}
	else
	{
		// Einzahlung
		f << "IN " << n;
		Einzahlung(n);
		f << " " << geld << "\n";
	}
	f.close();
}

// 8---------------------------------------------------------------
void Account::read_from_file()
{
	fstream myfile;
	myfile.open("information.txt", ios::in);
	string line;
	vector <string> v;
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			stringstream ss(line);
			while (getline(ss, line, ' '))
			{
				v.push_back(line);
			}
			// we have now the vector with the 2 word 
			// from string to int 
			stringstream value(v[1]);
			int val = 0;
			value >> val;
			if (v[0] == "IN")
				geld += val;
			else
				geld -= val;
			v.clear();
		}
	}
	else
		cout << "Not opened";
}

int main()
{
	Account ac1;
	ac1.in_file(1, 100);
	ac1.in_file(0, 5);
	Account ac1;
	ac1.read_from_file();

	const char* name = "Naomis";
	assert(lange(name) == 6);

	const char* name2 = "omi";

	const char* hello = "omika";
	char* neue_string = copy_(name, hello, 3);

	assert(strfind(name, hello) == nullptr);
	assert(*strfind(name, name2) == 'o');

	return 0;
}