// TheWalkingDead.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>

enum class Weapon
{
	FISTS,
	GUN,
	SHOTGUN,
	REVOLVER,
	SNIPER,
	MACHINE_GUN,
	MAX

};

class Zombie;


class Player {

	//atributos
	Weapon weapon;
	float precission;
	int life;

	Weapon GetWeapon(int a) {
		switch (a) {
		case(0):
			return Weapon::FISTS;
			break;
		case(1):
			return Weapon::GUN;
			break;
		case(2):
			return Weapon::SHOTGUN;
			break;
		case(3):
			return Weapon::REVOLVER;
			break;
		case(4):
			return Weapon::SNIPER;
			break;
		case(5):
			return Weapon::MACHINE_GUN;
			break;
		default: return Weapon::FISTS;


		}
	}


	//Metodos
	void attack(Zombie &) {
		
	}	
	bool isAlive() {
		if (life > 0)
			return true;
		else
			return false;
	}
};

class Zombie {
	int distanceToPlayer;
	float speed;
	float damage;
	int lifezombie;
};

Player player() {
	const int MAX_WEAPON{ 6 };
	const float MAX_PRECISSION{ 1.0 };
	const int MAX_LIFE{ 100 };

	return Player
	{
	Weapon weapon= Weapon(rand()%MAX_WEAPON);
	};
}


int main()
{

	
}

