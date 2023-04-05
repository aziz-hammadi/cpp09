#include <iostream>
#include <map>

int main()
{
    std::map<std::string, int> tab;

    tab["a"] 	= 0;
    tab["b"]		= 1;
    tab["c"] 	= 2;
	tab["d"]	= 3;
	tab["e"]	= 4;

	std::map<std::string, int>::iterator it;

	std::cout << "DEBUT" << std::endl;

	it = tab.begin();
	while (it != tab.end())
	{
		std::cout << it->first << " ; " << it->second << std::endl;
		it++;
	}
	std::cout << "FIN" << std::endl;

	std::string mot_clef = "deux";

	it = tab.find(mot_clef);
	if(it != tab.end())
	{
		std::cout << mot_clef << " est dans " << it->second << " par " << it->first;
	}
	else
		std::cout << mot_clef << " n'existe pas" << std::endl;
	return (0);
}