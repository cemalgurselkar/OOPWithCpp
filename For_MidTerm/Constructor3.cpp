#include <iostream>
using namespace std;
class myclass{
    public:
        double a,b;
        myclass(double x, double y){
            a=x;
            b=y;
            cout<<"Constructor object a="<<a<<" b="<<b<<endl;
        }
        myclass(){
            a=5,b=10;
            cout<<"Constructor obejct (without parameters) a="<<a<<" b="<<b<<endl;
        }
        ~myclass(){
            cout<<"Destructor a="<<a<<" b="<<b<<endl;
        }
        void show_ab(){
            cout<<"Value of a="<<a<<" Value of b="<<b<<endl;
        }
};

int main(){
    myclass ob_1(0,0),ob2;
    ob_1.show_ab();
    {myclass ob_3(20,50);};
    ob2.show_ab();
    return 0;
}