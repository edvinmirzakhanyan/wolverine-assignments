#include <iostream>
#include <map>

enum Colors { Red, Blue, Orange };

std::string toString(int);
std::string toEnum(int);

int main ()
{
    Colors retcolor;
    retcolor = Red;
    std::cout << toString(retcolor) << std::endl;
    retcolor = Orange;
    std::cout << toEnum(retcolor) << std::endl;
}

std::string toString(int color)
{
    std::map<int, std::string> smap;

    smap[Colors::Red] = "Red";
    smap[Colors::Blue] = "Blue";
    smap[Colors::Orange] = "Orange";

    return smap[color];
}

std::string toEnum(int color)
{
    std::map<int, std::string> emap;

    emap[Colors::Red] = "Colors::Red";
    emap[Colors::Blue] = "Colors::Blue";
    emap[Colors::Orange] = "Colors::Orange";

    return emap[color];
}