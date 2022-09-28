#include <iostream>

void memset(char*, char,size_t);

int main ()
{
    const int size = 10;
    char arr[size];
    char val;
    std::cin >> val;

    memset(arr, val, size);
}

void memset(char* arr, char val, size_t count)
{
    for (int i = 0; i < count; ++i)
    {
        arr[i] = val;
    }
}