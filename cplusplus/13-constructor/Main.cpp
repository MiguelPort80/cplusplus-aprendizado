#include <iostream>


class Entity{
    public:
        float x,y;

        /*Entity(){
            
        }*/

        Entity(float a, float b){
            x = a;
            y = b;
            std::cout << "Created Entity!" << std::endl;
        }
        //destructor
        ~Entity(){
            std::cout << "Destroyed Entity!" << std::endl;
        }
        void print(){
            std::cout << x << ',' << y << std::endl;
        }
};

void func(){
    Entity e(12.0F, 15.0F);
    e.print();
}

int main(){
    func();
}