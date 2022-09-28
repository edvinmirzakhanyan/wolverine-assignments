#include <iostream>

void memcpy(const char*, char*, size_t count);

int main ()
{
    const int size = 6;
    char arr[] = "Hello";
    char carr[size];

    memcpy(arr, carr, size);
}

void memcpy(const char* arr, char* carr, size_t count)
{
    for (int i = 0; i < count; ++i)
    {
        carr[i] = arr[i];
    }
}