#include <iostream>
#include <array>
int main(){
    //um array é basicamente um ponteiro de int
    int array[5];
    for (int i = 0 ; i <= 5; i++) {
        array[i] = i;
    }
    //std::cout << array << std::endl;
    //std::cout << *array << std::endl;

    int* heaparray = new int[5];

    delete [] heaparray;
    //a partir do C++ 11, esse tipo de array tem mais metodos
    //e é mais seguro graças ao outofbounds check e outros...
    std::array<int, 5> safeArray;
    for (int i = 0 ; i <= safeArray.size(); i++) {
        safeArray[i] = i;
        std::cout << safeArray[i] << std::endl;
        
    }

    std::cout << safeArray.back() << std::endl;
}