#include <iostream>

std::string toLowerCase (const std::string&);

int main ()
{
    std::string str;
    std::getline (std::cin, str);

    std::cout << toLowerCase (str) << std::endl;
}

std::string toLowerCase (const std::string& str)
{
    int size = str.size ();
    std::string nstr;

    for (int i = 0; i < size; ++i)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            nstr += str[i] + 32;
            continue;
        }
        nstr += str[i];
    }
        return nstr; 
}