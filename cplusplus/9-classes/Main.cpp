#include  <iostream>

#define log(x) std::cout << x << std::endl

class Player{
    public:
        int x, y;
        int speed;

        void Move(int xa,int ya){
            x +=  xa*speed;
            y +=  ya*speed;
        }
};

int main(){
     Player player;
     player.x = 10;
     player.y = 20;
     player.speed = 300;
     player.Move(10,20);
     log(player.x);
     log(player.y);
}