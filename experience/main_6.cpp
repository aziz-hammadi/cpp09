#include <iostream>
#include <map>
#include <string>

class Client {
 public:
  Client(std::string name, std::string address, std::string phone_number,
         std::string email)
      : name_(name),
        address_(address),
        phone_number_(phone_number),
        email_(email) {}

  std::string GetName() const { return name_; }
  std::string GetAddress() const { return address_; }
  std::string GetPhoneNumber() const { return phone_number_; }
  std::string GetEmail() const { return email_; }

 private:
  std::string name_;
  std::string address_;
  std::string phone_number_;
  std::string email_;
};

int main() {
  std::map<std::string, Client> client_database;

  // Ajoute quelques clients à la base de données
  Client client1("Alice Smith", "123 Main St, Anytown USA", "555-1234",
                 "alice@example.com");
  client_database[client1.GetName()] = client1;

  Client client2("Bob Johnson", "456 Oak Ave, Othertown USA", "555-5678",
                 "bob@example.com");
  client_database[client2.GetName()] = client2;

  Client client3("Charlie Brown", "789 Elm St, Somewhere USA", "555-9101",
                 "charlie@example.com");
  client_database[client3.GetName()] = client3;

  // Affiche les informations de chaque client dans la base de données
  for (auto& pair : client_database) {
    std::cout << "Nom: " << pair.first << std::endl;
    std::cout << "Adresse: " << pair.second.GetAddress() << std::endl;
    std::cout << "Numéro de téléphone: " << pair.second.GetPhoneNumber()
              << std::endl;
    std::cout << "Adresse e-mail: " << pair.second.GetEmail() << std::endl;
    std::cout << std::endl;
  }

  return 0;
}
