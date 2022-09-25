#include <iostream>

int main ()
{
    int num;
    std::cin >> num;

    label:
        if (num >= 0)
        {
            std::cout << num << ' ';
            --num;
            goto label;
        }

        return 0;
}