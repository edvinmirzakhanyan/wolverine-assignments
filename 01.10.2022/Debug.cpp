#include <iostream>

//#define DEBUG

void print(const std::string&);

int main ()
{
    print("Print function called");
}

void print(const std::string& str)
{
    #ifdef DEBUG
        std::cout << str << std::endl;
    #endif
}