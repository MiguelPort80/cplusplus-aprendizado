//#include <iostream>

int main() {
    /*assim voce aloca a var na stack
      stack = comando de alocação mais simples e rapido
      porem voce fica limitado ao tamanho da stack 
      cada thread tem a sua própria stack
      */
    int intstack = 7;
    /*assim voce aloca a var no heap
      heap = comando de alocação mais complexo
      um pouco mais lento que a stack pórem tem mais acesso a memoria
      o heap vai ser compartilhado entre threads
      */
    int* intheap = new int;
    *intheap = 5;
    delete intheap;
    
}