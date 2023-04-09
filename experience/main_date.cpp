/*#include <iostream>
#include <string>
#include <ctime>

int main() {
  std::string str_date = "2023-01-09 15:30:45";
  std::tm tm_date = {};

  // convertir la chaîne de caractères en structure tm
  const char* date_format = "%Y-%m-%d %H:%M:%S";
  char* ptr = strptime(str_date.c_str(), date_format, &tm_date);

  if (ptr == nullptr) {
    std::cerr << "Erreur lors de la conversion de la date" << std::endl;
    return 1;
  }

  // afficher les informations de la structure tm
  std::cout << "Année : " << tm_date.tm_year + 1900 << std::endl;
  std::cout << "MOISSSS : " << tm_date.tm_mon + 1 << std::endl;

  if (tm_date.tm_mon < 9)
  {
    std::string str_month = '0' + std::to_string(tm_date.tm_mon + 1);
    tm_date.tm_mon = std::stoi(str_month) - 1;  
  }
  if (tm_date.tm_mday < 9)
  {
    std::string str_day = "0" + std::to_string(tm_date.tm_mday + 1);
    tm_date.tm_mday = std::stoi(str_day);  
  }
  std::cout << "Mois : " << tm_date.tm_mon + 1 << std::endl;
  std::cout << "Jour : " << tm_date.tm_mday << std::endl;
  std::cout << "Heure : " << tm_date.tm_hour << std::endl;
  std::cout << "Minute : " << tm_date.tm_min << std::endl;
  std::cout << "Seconde : " << tm_date.tm_sec << std::endl;

  return 0;
}
*/

#include <iostream>
#include <string>
#include <ctime>

int main() {
  std::string str_date = "2023-04-09 15:30:45";
  std::tm tm_date = {};

  // convertir la chaîne de caractères en structure tm
  const char* date_format = "%Y-%m-%d %H:%M:%S";
  char* ptr = strptime(str_date.c_str(), date_format, &tm_date);

  if (ptr == nullptr) {
    std::cerr << "Erreur lors de la conversion de la date" << std::endl;
    return 1;
  }

  // vérifier la longueur de tm_mon et ajouter un '0' si nécessaire
  if (tm_date.tm_mon < 9) {
    std::string str_month = "0" + std::to_string(tm_date.tm_mon + 1);
    std::cout << "str_month :" << str_month << std::endl;
    tm_date.tm_mon = std::stoi(str_month);
    std::cout << "tm_date.tm_mon :" << tm_date.tm_mon << std::endl;
    int i = 0;
    while (str_month.size() != 2)
    {
      str_month[i] = 0;
      i++;
      //str_month[i] = to_string(tm_date.tm_mon + 1);
    }
    tm_date.tm_mon = std::stoi(str_month) - 1;
    std::cout << "tm_date.tm_mon :" << tm_date.tm_mon << std::endl;
    std::cout << "ICI___2" <<std::endl;
  }

  // afficher les informations de la structure tm
  std::cout << "Année : " << tm_date.tm_year + 1900 << std::endl;
  std::cout << "Mois : " << str_month << std::endl;
  std::cout << "Jour : " << tm_date.tm_mday << std::endl;
  std::cout << "Heure : " << tm_date.tm_hour << std::endl;
  std::cout << "Minute : " << tm_date.tm_min << std::endl;
  std::cout << "Seconde : " << tm_date.tm_sec << std::endl;

  return 0;
}
