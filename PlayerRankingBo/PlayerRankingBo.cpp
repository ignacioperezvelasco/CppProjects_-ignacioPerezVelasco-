

#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>


int main()
{
	std::string usuario;
	int puntuacion;

	std::map<int,std::string> ranking;

	



	ranking[100] = "Juan";
	//ranking.insert(std::make_pair("Juan", 100));
	//ranking.insert(std::pair<std::string, int>("Juan", 100));
	ranking[65] = "Pepe";
	ranking[120] = "Pepito";
	ranking[150] = "Maria";
	ranking[87] = "Anselmo";

	std::cout << "Introduce tu nombre de Usuario: " << std::endl;
	std::cin >> usuario >> puntuacion;
	/*std::cout << "Introduce tu Puntuacion: " << std::endl;
	std::cin >> puntuacion;*/

	ranking[puntuacion ] = usuario;

	

	/*std:: vector <std::pair<std::string, int>*> ordenar;
	for (auto &player : ranking)
	{
		std::pair<std::string, int>* ptr = &player;
		ordenar.push_back(&player);
	}*/

	for (auto it = ranking.begin(); it != ranking.end(); ++it)
	{
		std::cout << it->second << " " << it->first<< "\n " << std::endl;
	
	}
	

}
