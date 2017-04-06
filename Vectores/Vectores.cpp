// Vectores.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>

class Persona {
public:
	std::string name;
	int edad;
	int dni;

	Persona() :
		name{ "kje" },
		edad{ rand() % 49 + 1 },
		dni{ rand() % 12345678 + 9999999 }
	{};
};

int main()
{
	Persona p1();
	Persona p2();
	Persona p3();

	std::vector<int> v1(5);
	std::vector<int> v2(10, 0);
	std::vector<int> v3({ 10,9,8,7,6,5,4,3,2,1 });
	std::vector<std::string> v4({ "Gerttrudiz","Pancracia","Hipolito","Eustaquio" });
	std::vector<int> v5(v3);
	std::vector<Persona> v6{ p1(),p2(),p3() };
	std::vector<int> v7({ 10,9,8,7,6,5,4,3,2,1 });
	std::vector<int> sumaDeDos= AddVectors (v3,v7);
	

}

std::vector<int> AddVectors(std::vector<int> a, std::vector<int> b) {
	std::vector<int> final;
	for (int i{ 0 }; i <a.size; i++) 
	{
		final[i] = (a[i] + b[i]);
	}
}