#include <iostream>
 
class Entity{
	private:
		int x, y;
		mutable int debug = 0;
	public:
		int Getx() const {
			return x;
		}

		const int Gety() const{
			debug++;
			return y;
		}
};

int main(){
	const int MAX_AGE = 90;
	std::cout << MAX_AGE << std::endl;

}
