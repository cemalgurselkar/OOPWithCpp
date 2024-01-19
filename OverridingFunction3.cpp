#include <iostream>
using namespace std;

class Parent
{
	public:
		void print()
		{
			cout<<"I am the Parent class Function"<<endl;
		}
};

//Defining of the derived class
class Child : public Parent
{
	public:
		//Defining of the overriding function
		void print(){
			cout<<"I am the Child class function"<<endl;
		}
};

int main()
{
	//create instances of the derived class
	Child gfb1,gfb2;
	
	//call the overriding function
	gfb1.print();
	
	//call the overridden function of the Base class
	gfb2.Parent::print();
	return 0;
}
