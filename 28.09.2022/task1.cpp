#include <iostream>

std::string toUpperCase (const std::string&);

int main ()
{
    std::string str;
    std::getline (std::cin, str);

    std::cout << toUpperCase (str) << std::endl;
}

std::string toUpperCase (const std::string& str)
{
    int size = str.size ();
    std::string nstr;

    for (int i = 0; i < size; ++i)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            nstr += str[i] - 32;
            continue;
        }
        nstr += str[i];
    }
        return nstr; 
}