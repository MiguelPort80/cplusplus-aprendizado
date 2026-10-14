#include <iostream>
#include <algorithm>
#define LOG(x) std::cout << x << std::endl
void reverseArr(int* arr, int size)
{
    std::reverse(arr, arr+size);
    for (int i = 0; i < size; i++) {
        LOG((arr[i]));
    }
}
