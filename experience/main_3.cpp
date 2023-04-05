#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> wordCount;

    // Ajoute des mots au map
    wordCount["apple"] = 3;
    wordCount["orange"] = 2;
    wordCount["banana"] = 1;
    wordCount["pear"] = 4;

    // Parcourt le map et affiche chaque mot et son nombre d'occurrences
    std::map<std::string, int>::iterator it;
    for (it = wordCount.begin(); it != wordCount.end(); it++) {
        std::cout << it->first << " : " << it->second << std::endl;
    }

    // Recherche un mot spécifique et affiche son nombre d'occurrences
    std::string searchWord = "apple";
    it = wordCount.find(searchWord);
    if (it != wordCount.end()) {
        std::cout << searchWord << " appears " << it->second << " times." << std::endl;
    } else {
        std::cout << searchWord << " was not found." << std::endl;
    }

    return 0;
}
