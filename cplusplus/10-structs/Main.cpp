#include  <iostream>

#define log(x) std::cout << x << std::endl
/*basicamente structs e classes são iguais
  mas nós usamos structs para manter a 
  compatibilidade com a linguagem C e não
  utilizamos metódos pois C não reconhece métodos
  dentro de structs
*/
struct Player{    
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