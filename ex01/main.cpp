#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cerr << "les arguments ne sont pas suffisament\n";
    }
    else
        std::cout << "ca marche" << std::endl;
}