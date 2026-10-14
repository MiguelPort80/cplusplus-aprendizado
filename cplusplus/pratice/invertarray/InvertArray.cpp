#include <iostream>
#include "invert.h"
#define LOG(x) std::cout << x << std::endl
int main(){
    const int sizeArray = 5;
    int array[sizeArray];
    for (int v = 0; v < sizeArray; v++) {
        array[v] = v;
    }

    reverseArr(array, sizeArray);

}
