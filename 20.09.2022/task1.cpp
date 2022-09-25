#include <iostream>
#include <map>

int _calculator (char, int, int);
int _add (int, int);
int _sub (int, int);
int _mul (int, int);
int _div (int, int);

int main ()
{
    char op;
    std::cin >> op;
    int num1;
    int num2;
    std::cin >> num1
             >> num2;

    std::cout << _calculator (op,num1,num2) << std::endl;

}

int _calculator (char op, int num1, int num2)
{
    std::map<char, int (*) (int, int)> cal;

    cal['+'] = &_add;
    cal['-'] = &_sub;
    cal['*'] = &_mul;
    cal['/'] = &_div;

    return cal[op] (num1, num2); 
}

int _add (int num1, int num2)
{
    return num1 + num2; 
}

int _sub (int num1, int num2)
{
    return num1 - num2;
}

int _mul (int num1, int num2)
{
    return num1 * num2;
}

int _div (int num1, int num2)
{
    return num1 / num2;
}