#include <vector>
#include <algorithm>

int main(int argc, char *argv[])
{
    std::ifstream file("input.txt");
    std::string line;
    std::map<size_t, std::string, std::greater<size_t>> lines;
    size_t i = 0;
	while (std::getline(file, line))
    {
        lines.insert({i, line});
        ++i;
    }

    for (std::map<size_t, std::string>::iterator it = lines.begin(); it != lines.end(); ++it)
    {
        std::cout << it->first << ": " << it->second << std::endl;
    }

    return 0;