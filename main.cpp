#include <iostream>
#include <string>
#include <fstream>

struct NombreNonValid : public std::exception {};

stoi
{
	...
	..
	...
	...
	if (arrive pas lire un nombre)
		throw std::invalid_argument()
}

struct Personnage {
	Personnage() {   //constructeur par defaut sans parametre
		age = 12;
		prenom = "non defini";
	}

	Personnage(int p_age, std::string p_prenom) { //constructeur avec 2 parametre
		age = p_age;
		prenom = p_prenom;
	}

	Personnage(const Personnage &p) { // constructeur par copie
		age = p.age;
		prenom = p.prenom;
	}

	Personnage(std::string fileName)
	{
		std::ifstream file(fileName);
		std::string line;
		std::getline(file, line, ',');
		prenom  = line;
		std::getline(file, line, ',');
		try 
		{
			age = std::stoi(line);
		}
		catch (std::invalid_argument &error)
		{
			throw NombreNonValid();
		}
	}

	int age;
	std::string prenom;
};

// parametre constant non modifiable
void printPersonnage(const Personnage &p) {
	std::cout << p.prenom << " - " << p.age << std::endl;
}

struct Point {
	int x;
	int y;
};

Point operator+(Point a, Point b) {
	Point c;
	c.x = a.x + b.x;
	c.y = a.y + b.y;
	return c;
}

int main(int ac, char **av) {
	// Personnage a;
	// Personnage b(45, "Aziz");
	// Personnage c(LONG_MAX, "Aziz");
	// Personnage d(a);

	// Personnage e;
	// std::ifstream file("aziz.txt");
	// std::string line;
	// std::getline(file, line, ',');
	// e.prenom = line;
	// std::getline(file, line, ',');
	// e.age = std::stoi(line);
	// printPersonnage(e);

	// Personnage f;
	// file.close();
	// file.open("mohammed.txt");
	// std::getline(file, line, ',');
	// f.prenom = line;
	// std::getline(file, line, ',');
	// f.age = std::stoi(line);
	// printPersonnage(f);

	// Personnage g;
	// file.close();
	// file.open("lola.txt");
	// std::getline(file, line, ',');
	// g.prenom = line;
	// std::getline(file, line, ',');
	// g.age = std::stoi(line);
	// printPersonnage(g);

	Point a;
	a.x = 4;
	a.y = 7;
	
	Point b;
	b.x = 8;
	b.y = 5;

	Point c = a + b; // operator+(a, b)


	try {
		Personnage aziz("aziz.txt");
	}
	catch (NombreNonValid) {
		std::cerr << "Nombre non valide" << std::endl;
	}

	// Personnage b(a);
	// printPersonnage(b);
	return 0;
}
