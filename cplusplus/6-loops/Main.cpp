#include <iostream>
#include "Log.h"

int main(){

    for (int i = 0; i <= 5; i++) {
        if (i == 3) {
            Log("3");
            continue;
        }else if(i > 3){
            Log("its break time");
            break;
        }
        Log("Hello WOrld");
    }
    Log("------------------------");
    int i = 0;
    while (i <= 5) {
        Log("Hello WOrld");
        i++;
    }
    Log("--------------");
    bool cond = false;
    do {
        Log("Hello World");
    }while (cond);

    std::cin.get();

    
}