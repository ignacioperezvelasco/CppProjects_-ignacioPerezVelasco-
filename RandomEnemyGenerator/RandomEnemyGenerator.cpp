// RandomEnemyGenerator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string"
#include "iostream"
#include "ctime"
using namespace std;

enum class enemytype { 
	ZOMBIE, 
	VAMPIRE, 
	GHOST,
	WEREWOLF,
	MAX
};

struct enemy {
	enemytype type;
	std::string name;
	int health;

	std::string getEnemyTypeString()
	{
		switch (type) {
		case enemytype::ZOMBIE	:		return "ZOMBIE"		;
		case enemytype::VAMPIRE	:		return "VAMPIRE"	;
		case enemytype::GHOST	:		return "GHOST"		;
		case enemytype::WEREWOLF:		return "WEREWOLF"	;
		default: return " ";
		}

		}
};

bool operator==(const enemy &a, const enemy &b) //para operar los enums con ==
{
	return a.name == b.name && a.type == b.type;
}

static enemy CreateRandomEnemy() 
{
		static const int MAX_LIFE(500);//vida maxima
		static const std::string NAMES[]//possibles nombres
		{
			"skrr",
			"krul",
			"Veerus",
			"pa",
			"comotu"
		};

	
	return enemy
	{
		static_cast<enemytype>(rand() % static_cast<int>(enemytype::MAX)),
		NAMES[rand() % (sizeof NAMES / sizeof std::string)],//(sizeof NAMES / sizeof std::string) los bytes que ocupa / cuantos son = cuanto ocula cada uno
		rand() % MAX_LIFE
	};
}

int main()
{
	srand(static_cast<unsigned>(time(nullptr)));
	const int MAX_ENEMIES{ 5 };
	enemy enemies[MAX_ENEMIES];

	int i{ 0 };
	while (i < MAX_ENEMIES)
	{
		{
			enemies[i] = CreateRandomEnemy();
			int j{ i - 1 };
			while (j >= 0) {
				if (enemies[i] == enemies[j])
				{
					i--;
					break;
				};
				j--;
			}
		};
		++i;
	}

	std::cout << "list of enemies \n";
	for (auto &enemy : enemies)
	{
		std::cout << enemy.name << " is a " << enemy.getEnemyTypeString() << "whose life is " << enemy.health << std::endl;
 	}


}

