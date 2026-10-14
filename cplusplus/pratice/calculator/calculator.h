#include <iostream>
#define LOG(x) std::cout << x << std::endl
class Calculator {
    private:
        float x,y,result;

    public:
        void setXY(float xa, float ya){
            x = xa;
            y = ya;
        }

        void Sum(){
            result = x + y;
            LOG(result);

        }

        void Subs(){
            result = x - y;
            LOG(result);
        }

        void Div(){
            result = x / y;
            LOG(result);
        }

        void Multi(){
            result = x * y;
            LOG(result);
        }
};