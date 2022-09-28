#include <iostream>

bool startsWith (const std::string&, const std::string&);

int main ()
{
    std::string str;
    std::string substr;
    std::getline (std::cin, str);
    std::getline (std::cin, substr);


    std::cout << startsWith (str, substr) << std::endl; 
}

bool startsWith (const std::string& str, const std::string& substr)
{
    int size =  substr.size ();

    for (int i = 0; i < size; ++i)
    {
        if (str[i] != substr[i])
        {
            return false;
        }
    }
    return true;
}