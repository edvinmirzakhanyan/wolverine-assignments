#include <iostream>

std::string replaceAll (const std::string&, const std::string&, const std::string&);

int main ()
{
    std::string str;
    std::string substr;
    std::string rp;
    std::getline (std::cin, str);
    std::getline (std::cin, substr);
    std::getline (std::cin, rp);

    std::cout << replaceAll (str, substr, rp) << std::endl;
}

std::string replaceAll (const std::string& str, const std::string& substr, const std::string& rp)
{
    int size = str.size ();
    int size1 = substr.size ();
    std::string nstr;
    std::string cstr;
    int count = 0;


    for (int i = 0, j = 0; i < size; ++i)
    {
        cstr += str[i]; 
        if (str[i] == substr[j])
        {
            ++j;
            continue;
        }

        if (j == size1)
        {
            j = 0;
            nstr += rp;
        }
            nstr += str[i];
            cstr = "";

    }
    return nstr;
}