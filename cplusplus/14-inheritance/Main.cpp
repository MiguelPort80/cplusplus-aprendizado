#include <iostream>

class Entity{
    public:
        float x,y;
        void Move(float xa, float ya){
            x += x * xa;
            y += y * ya;
        }
    protected:
        int entity_id = 0;
};

class Player : public Entity{
    public:
        const char* name;
        void showName(){
            std::cout << name << std::endl;
        }
    protected:
        int entity_id = 1;
};

int main(){
    Player p;
    p.x = 10.0f;
    p.y = 11.0f;
    p.Move(1.0f, 2.0f);
    p.name = "james";
    p.showName();

    std::cout << sizeof(Player) << std::endl;
    std::cout << sizeof(Entity) << std::endl;   
}