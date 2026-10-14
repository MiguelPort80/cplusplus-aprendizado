#include <iostream>


struct Numbers{
    /*variaveis estáticas são compartilhadas entre as instancias da
    classe/struct
    metodos estaticos tem um efeito semelhante
    usamos variaveis staticas para variaveis que queremos compartilhar
    globalmente, metodos estaticos nao podem acessar variaveis nao 
    estaticas.
        */
    static int x,y;

    static void print(){
        std::cout << x << ',' << y << std::endl;
    }
};

int Numbers::x;
int Numbers::y;

int main(){
    //Numbers num1;
    //Numbers num2;
    Numbers::x = 10;
    Numbers::y = 12;
    Numbers num3;
    num3.print();
    Numbers::print();
    //int s_var = 1;
    //std::cout << s_var << std::endl;
}