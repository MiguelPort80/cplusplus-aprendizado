#include <iostream>
#include <string>
class Entity {
	public:
		std::string name;
        int num;
		Entity() : name("default")
		{

		}

		Entity(std::string nm){
			name = nm;
		}

        Entity(int a) : num(1) {
          num = a;
        }
};

void printEntity(Entity* e){
  std::cout << e << std::endl;
};

int main(){
	Entity* e;
    Entity e2;
    printEntity(e);
	//std::cout << e.name << std::endl;
}
