#include <iostream>
using namespace std;

class Parent{
	public:
		void print(){
			cout<<"Base Function"<<endl;
		}
};

class Child : public Parent{
	public:
		void print(){
			cout<<"Derived Function"<<endl;
			//cal of overriding function
		    Parent::print();
		}
};

int main()
{
	Child child_derived;
	child_derived.print();
	return 0;
}
