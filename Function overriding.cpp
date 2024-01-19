//to demonstrate function overriding
#include <iostream>
using namespace std;

class Parent{
	public:
		void print(){
			cout<<"Base function"<<endl;
		}
};

class Child : public Parent{
	public:
		void print(){
			cout<<"Derived Function"<<endl;
		}
};

int main()
{
	Child child_derived;
	child_derived.print();
	return 0;
}
