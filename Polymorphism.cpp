//Polymorphism
#include <iostream>
using namespace std;

class geeks{
	public:
		//Function with 1 in parameter
		void func(int x){
			cout<<"Value of x: "<<x<<endl;
		}
		//Function with same name but 1 double parameter
		void func(double x){
			cout<<"Value of x: "<<x<<endl;
		}
		//Function with same name and 2 int parameter
		void func(int x,int y){
			cout<<"Value of x: "<<x<<"and y: "<<y<<endl;
		}
};

int main()
{
	geeks obj1;
	
	obj1.func(7);
	obj1.func(4.5);
	obj1.func(4,6);
	return 0;
}
