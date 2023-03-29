#include "RPN.hpp"
#include <stack>
#include <iostream>


int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cerr << "les arguments ne sont pas suffisament\n"<< std::endl;
        std::cerr << "Error" << std::endl;
    }
    else
    {
        std::string s = argv[1];
        std::cout << "ca marche : " << s << std::endl;
    }
     std::string s = argv[1];

    int i;
    i = 0;
    std::stack<int> pile;
    while (s[i])
    {
        if (isdigit(s[i]))
        {
            pile.push(s[i] - '0');
            std::cout << "chiffre" << std::endl;
        }
        else
        {
            if (s[i] == '+')
                std::cout << "+" << std::endl;
            else if (s[i] == '-')
                std::cout << "-" << std::endl;
            else if (s[i] == '/')
                std::cout << "/" << std::endl;
            else if (s[i] == '*')
                std::cout << "*" << std::endl;
            else
            {
                std::cout << "Error\n" << std::endl;
                return (0);
            }
        }
        i++;
    }
    if (!pile.empty())
    {
        std::cout << "ca marche : " << pile.top() << std::endl;
        pile.pop();
        std::cout << "ca marche : " << pile.top() << std::endl;
        pile.pop();
        std::cout << "ca marche : " << pile.top() << std::endl;
    }
    /*
    int i;
    i = 0;
    std::stack<int> p = s; 

    while (argv[1][i])
    {
        std::stack<int> p;
        c >> i; 
    }
    
    else
    {
        std::string s = argv[1];
        std::cout << "ca marche : " << s << std::endl;
    }
    else
        std::cout << "marche pas" << std::endl;*/
    return (0);
}