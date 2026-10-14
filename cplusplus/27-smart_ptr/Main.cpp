#include <iostream>
#include <memory>

class Entity{
    public:   
    Entity(){
	std::cout << "Created entity" << std::endl;
    }

    ~Entity(){
	std::cout << "Destroyed entity" << std::endl;

    }

    void print(){
    }
};

int main(){

	{
	    std::unique_ptr<Entity> entity = std::make_unique<Entity>(); 
	
	    entity->print();	
	}

	{
	    std::shared_ptr<Entity> e0;
	    {

		std::shared_ptr<Entity> entity = std::make_shared<Entity>();
	    	e0 = entity;	
	    }
	    std::cout << "-----------" << std::endl;

	}

 	{  
 		std::weak_ptr<Entity> e1; 
	    {

		std::shared_ptr<Entity> entity = std::make_shared<Entity>();
		e1 = entity;	
	    }
	}
}
