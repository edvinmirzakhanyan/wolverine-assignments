#include <iostream>

std::string ltrim (const std::string&);

int main ()
{
    std::string str;
    std::getline (std::cin, str);

    std::cout << ltrim (str) << std::endl;
}

std::string ltrim (const std::string& str)
{
    int size = str.size ();
    std::string ltrim;

    for (int i = 0; i < size; ++i)
    {
        if (str[i] != ' ')
        {
            ltrim += str[i];
            if (str[i + 1] == ' ')
            {
                ltrim += ' ';
            }
        }
    }

    return ltrim;
}