#include <iostream>

bool endsWith (const std::string&, const std::string&);

int main ()
{
    std::string str;
    std::string substr;
    std::getline (std::cin, str);
    std::getline (std::cin, substr);


    std::cout << endsWith (str, substr) << std::endl; 
}

bool endsWith (const std::string& str, const std::string& substr)
{
    for (int i = str.size () - 1, j = substr.size () - 1; j >= 0; --i, --j)
    {
        if (str[i] != substr[j])
        {
            return false;
        }
    }
    return true;
}