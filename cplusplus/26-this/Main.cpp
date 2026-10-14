#include <iostream>
struct Entity {
    int x,y;

    Entity(int x, int y){
	this->x = x;
	this->y = y;
    }

    void printEntity(){
	std::cout << this->x << std::endl;

	std::cout << this->y << std::endl;
    }
};
int main() {
    Entity e(10, 20);
    e.printEntity();

}
