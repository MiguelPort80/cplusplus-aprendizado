#include <cstring>
#include  <iostream>

#define Log(x) std::cout << x << std::endl

int main(){
    int var = 8;
    void* ptr = &var;
    void** ptr2 = &ptr;
    Log(ptr);
    Log(ptr2);
    Log(*ptr2);

    //heap

    char* buffer = new char[8]; //bytes
    memset(buffer,0,8);//alocando na memória

    delete[] buffer; 
}