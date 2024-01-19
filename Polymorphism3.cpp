#include <iostream>
using namespace std;

//Declaring a Base class
class GFB_Base{
	public:
		//Virtual function
		virtual void display()
		{
			cout<<"Called virtual Base Class function"<<endl;
		}
		void print()
		{
			cout<<"Called GFB_Base print function"<<endl;
		}
};

// Declaring a Child Class
class GFB_Child : public GFB_Base{
	public:
		void display()
		{
			cout<<"Called GFB_Child Display Function"<<endl;
		}
		void print()
		{
			cout<<"Called GFB_Child print Function"<<endl;
		}
};

int main()
{
	//Create a reference of class GFB_Base
	GFB_Base *base;
	GFB_Child child;
	base = &child;
	
	//This will call the virtual function
	base->GFB_Base::display();
	//this will call the non-virtual function
	base->print();
}
