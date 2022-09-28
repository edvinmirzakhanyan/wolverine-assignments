#include <iostream>

std::string rtrim (const std::string&);

int main ()
{
    std::string str;
    std::getline (std::cin, str);

    std::cout << rtrim (str) << std::endl;
}

std::string rtrim (const std::string& str)
{
    int size = str.size ();
    std::string rtrim;

    for (int i = 0; i < size; ++i)
    {
        if (str[i] != ' ' && str[i + 1] == ' ')
        {
            rtrim += str[i];
            break;
        }
        rtrim += str[i];
    }
    return rtrim;
}