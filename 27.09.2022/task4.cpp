#include <iostream>
#include <vector>
#include <map>

std::vector<std::string> split (const std::string&, const std::string&);

int main ()
{
    std::string str;
    std::string div;
    std::getline (std::cin, str);
    std::getline (std::cin, div);

    split (str, div);
}

std::vector<std::string> split (const std::string& str, const std::string& div)
{
    std::vector<std::string> split;
    std::map<char,bool> check;
    int ssize = str.size ();
    int dsize = div.size ();
    std::string split0;
    split.push_back (split0);

    for (int i = 0; i < dsize; ++i)
    {
        check[div[i]] = true;
    }

    for (int i = 0, j = 0; i < ssize; ++i)
    {

        if (!check[str[i]])
        {
            split[j] += str[i];
        }
        else if (check[str[i]] && !check[str[i + 1]])
        {
            ++j;
            std::string nstr;
            split.push_back (nstr);
        }
    }
    for (int i = 0; i < split.size (); ++i)
    {
        std::cout << split[i];
    }
    
    return split;
}