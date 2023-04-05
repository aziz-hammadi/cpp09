#include <iostream>
#include <map>
#include <string>

int main()
{
    std::string str = "this is a sample string";

    std::map<char, int> charFreq;
    std::string::iterator it;

    it = str.begin();
    while (it != str.end())
    {
        if(charFreq.find(*it) == charFreq.end())
            charFreq[*it] = 1;
        else
            charFreq[*it]++;
        it++;
    }

    std::map<char, int>::iterator itFreq;

    itFreq = charFreq.begin();
    while(itFreq != charFreq.end())
    {
        std::cout << itFreq-> first << " ; " << itFreq->second << std::endl;
        itFreq++;
    }
    return (0);
    
}