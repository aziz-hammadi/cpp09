#include <stdexcept>
#include <iostream>


int main(int ac, char **av)
{
    try
    {
        if (ac != 2)
            throw std::invalid_argument("test");
        if (av[2] != "bonjour")
            throw std::invalid_argument("test_2");

    }
    catch ("test")
    {
        std::cout << "bad argument" << std::endl;
    }
    catch (const std::invalid_argument = "test")
    {
        std::cout << "bad name argument" << std::endl;
    }
    return 0;
}