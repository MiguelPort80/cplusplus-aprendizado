#include <iostream>

int main(){
	const char* msg  = "HELLO";

    if(msg){
        std::cout << msg << std::endl;
    } else if (msg == "WORLD") {
        std::cout << msg << std::endl;
    }else {
        std::cout << "null pointer" << std::endl;
    }
    
}