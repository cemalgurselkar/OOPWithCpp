#include <iostream>
using namespace std;

//Base class
class Shape{
	public:
		//parameterized consturctor
		Shape(int l,int w)
		{
			length = l;
			witdh = w;
		}
		int get_area()
		{
			//Returing 1 in user-defined function means true
			cout<<"This is call to parent class area"<<endl;
			return -1;
		}
		protected:
			int length,witdh;
};

//Derived class
class Square : public Shape{
	public:
		Square(int l=0,int w=0) : Shape(l,w){
		}
		//Declaring and initializing derived class constructor
		int get_area(){
			cout<<"Square area: "<<length*witdh<<endl;
			return (length*witdh);
		}
};

class Rectangle : public Shape{
	public:
		Rectangle(int l=0,int w=0) : Shape(l,w){
		}
		
		int get_area()
		{
			cout<<"Rectangle area: "<<length*witdh<<endl;
			return (length*witdh);
		}
};

int main()
{
	Shape *s;
	
	//Making object of child class Square
	Square sq(5,5);
	
	//Making object of child class Rectangle
	Rectangle rec(4,5);
	s = &sq; //reference variable
	s->get_area();
	s = &rec; //reference variable
	s->get_area();
	
	return 0;
	return 0;
}
