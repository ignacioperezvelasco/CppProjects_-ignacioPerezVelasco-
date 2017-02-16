// RandomEnemyGenerator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"
#include "iostream"
#include "ctime"
using namespace std;
enum enemytype { zombie, vampire, ghost, witch };
struct enemy {
	enemytype type;
	string name;
	int health;
};

enemy CreateRandomEnemy(enemy a) {
	string names[]{ "Pepito","Manolo","Krul","Pepa","Hulk","Mongolin" };
	a.type = enemytype(rand()%4);
	a.name = names[rand()%6];
	a.health = rand()%400+100;
}


int main()
{
	bool soniguals;
	
	enemy uno;
	uno.name = "ja";
	enemy dos;
	CreateRandomEnemy(uno);
	CreateRandomEnemy(dos);

	if ((uno.type == dos.type) && (uno.name == dos.name))
	{
		soniguals = true;
	}
	else
		soniguals = false;

    return 0;
	cout << uno.type <<' ' << uno.name << uno.health  << endl	;
}

