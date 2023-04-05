#include <iostream>
#include <map>

int main()
{
    std::map<int, std::string> myMap;
    std::map<int, std::string> myMap_2;

    myMap[0] = "un";
    myMap[1] = "deux";
    myMap[2] = "trois";
    myMap_2[0] = "2_un";
    myMap_2[1] = "2_deux";
    myMap_2[2] = "2_trois";
    int i;
    i = 0;
    myMap.swap(myMap_2);
    std::cout << "myMap_debut :"<<myMap.size() << std::endl;
    std::cout << "myMap_2_debut :"<<myMap.size() << std::endl;
    while (!myMap_2[i].empty())
    {

        std::cout << "myMap_2 :"<<myMap.size() << std::endl;
        std::cout << "myMap_2 :"<< myMap.find(i) <<std::endl;
        i++;
    }

    return (0);
}