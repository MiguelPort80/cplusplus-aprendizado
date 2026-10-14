#include <iostream>
//interface = funcões virtuais puras
//Base = interface
class Base{
	public:
		virtual void print() = 0;
};

class Derived : public Base{
	public:
		 void print(){
			std::cout << "derived" << std::endl;
		}
};
int main(){
	Derived derived1;
	Base* base1 = &derived1;

//	base1->print(); = base
	base1->print();
}
