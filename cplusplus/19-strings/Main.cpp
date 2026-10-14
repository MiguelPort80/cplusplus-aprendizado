#include <iostream>
#include <string>
int main(){
    const char* name = "Roger";
    // quando for passar por parametro use como referencia
    // const std::string& string
    std::string name2 = "Heinder";
    name2 += " Deutschland";
    std::cout << name2.empty() << std::endl;
}