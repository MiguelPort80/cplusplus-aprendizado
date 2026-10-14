#include <iostream>

class Base{
	public:
		virtual void print(){
			std::cout << "base" << std::endl; 
		}
};

class Derived : public Base{
	public:
		void  print(){

			std::cout << "derived" << std::endl;
		}
};
int main(){
	Derived derived1;
	Base* base1 = &derived1;

//	base1->print(); = base
	base1->print();
}
