#include <iostream>

std::string trim (const std::string&);

int main ()
{
    std::string str;
    std::getline (std::cin, str);

    std::cout << trim (str) << std::endl;
}

std::string trim (const std::string& str)
{
    int size = str.size ();
    std::string trim;

    for (int i = 0; i < size; ++i)
    {
        if (str[i] != ' ')
        {
            trim += str[i];
        }
    }
    return trim;
}