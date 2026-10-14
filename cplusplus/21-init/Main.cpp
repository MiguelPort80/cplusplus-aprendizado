#include <iostream>
#include <string>
class Entity {
	public:
		std::string name;

		Entity() : name("default")
		{
			
		}

		Entity(std::string nm){
			name = nm;
		}
};

int main(){
	Entity e;
	std::cout << e.name << std::endl;
}
