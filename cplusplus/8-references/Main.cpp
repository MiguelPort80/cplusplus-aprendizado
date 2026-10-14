#include  <iostream>

#define log(x) std::cout << x << std::endl

/*void Increment(int* value){
    (*value)++;
}*/ //usando ponteiros

void Increment(int& value){
    value++;
} // usando referencias

int main(){
     int a = 5;
     //int b = 2;
     int& ref = a;
     //ref = b; <-- não altera a referencia e sim o valor de a
     
     Increment(a);
     log(a);
     log(ref);
     
}