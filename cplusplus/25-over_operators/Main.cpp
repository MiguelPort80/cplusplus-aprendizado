#include <iostream>

struct Vector{
    int x,y;
    int operator+(Vector& other){
	return other.x + x;	
    }
};

int main() {
    Vector v;
    v.x = 12;
    //std::cout << v.Add(v) << std::endl;
    std::cout << v + v << std::endl;
}
