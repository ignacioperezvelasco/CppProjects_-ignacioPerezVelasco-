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
std::ostream &operator<< (std::ostream &os, const Weapon &weapon) {
	switch (weapon)
	{
	case Weapon::GUN:			return os << "GUN";				break;
	case Weapon::SHOTGUN:		return os << "SHOTGUN";			break;
	case Weapon::REVOLVER:		return os << "REVOLVER";		break;
	case Weapon::SNIPER:		return os << "SNIPER";			break;
	case Weapon::MACHINE_GUN:	return os << "MACHINE_GUN";		break;
	default: return os << "FISTS";
	}

}


class Zombie;
class Player;

class Player
{
public:
	//atributos
	Weapon weapon;
	float precission;
	int life;

	Player() :
		weapon(static_cast<Weapon>(rand() % static_cast<int>(Weapon::MAX))),
		precission((rand() % 10 / 10.f)),
		life(100) {};


	Player(const Weapon &t_weapon, float t_precission, int t_life) :
		weapon(t_weapon),
		precission(t_precission),
		life(t_life) {};



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
	void attack(Zombie &) const;
	bool isAlive() const;
};

class Zombie {
	int distanceToPlayer;
	float speed;
	float damage;
	int life;
	void attack(Player &) const;
};

/*Player player(Player &a) {
	const int MAX_WEAPON{ 6 };
	const int MAX_PRECISSION{ 100 };
	const int MAX_LIFE{ 100 };

	a.weapon = rand() % MAX_WEAPON;
	a.precission = rand() % MAX_PRECISSION/100;
	a.life = rand() % MAX_LIFE;
}*/

void Player::attack(Zombie &zombie) const
{
	zombie.life -=static_cast<int>(static_cast<int>(weapon) * precission);
}

bool Player::isAlive() const
{
	return life > 0;
}

void Zombie::attack(Player &player)
{
	if (distanceToPlayer <= 0)
		player.life -= static_cast <int>(damage);
	else
		distanceToPlayer--;
}

int main()
{
	Player player;
	const int MAX_ZOMBIES{ 10 };
	Zombie zombies[MAX_ZOMBIES];

	std::cout << "Player\n\tnitial life:" << player.life <<	", weapon: " << player.weapon << ", precission: " << player.precission << std::endl;

	std::cout << "ZOMBIES ARE COMMING!" << std::endl;

	bool zombiesAreAlive;
	do {
		zombiesAreAlive = false;
		std::cout << "Player\n\tlife: " << player.life << std::endl;

		for (int i{ 0 }; i < MAX_ZOMBIES; ++i)
		{
			std::cout << "ZOMBIE[" << i << "]\n\tlife: " zombies[i].life << " distance: " << zombies[i].distance << " speed: " << zombies[i].speed << std::cout endl;
		}
	} while (player isAlive() && zombiesAreAlive);
	
}

