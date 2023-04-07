#include <string>
#include <iostream>

int main()
{
    std::string s = "scott>=tiger>=>=>=s";
    std::string delimiter = ">=";
    size_t pos = 0;
    std::string token;
    if ((pos = s.find(delimiter)) != std::string::npos) 
    {
        token = s.substr(0, pos);
        if (token.size()!=0 )
        {
            std::cout << s.size() << std::endl;
            std::cout << token << std::endl;
        }s.erase(0, pos + delimiter.length());
    }
}