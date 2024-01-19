#include <iostream>
using namespace std;

class base;

class anotherClass{
public:
	void memberFunction(base& obj);
};

class base{
private:
	int private_variable;
protected:
	int protected_variable;
public:
	base()
	{
		private_variable = 18;
		protected_variable = 78;
	}
	
	friend void anotherClass::memberFunction(base& obj);
};

void anotherClass::memberFunction(base& obj)
{
	cout <<"Private Variable: "<<obj.private_variable<<endl;
	cout <<"Protected Variable: "<<obj.protected_variable<<endl;
}

int main()
{
	base obj1;
	anotherClass obj2;
	obj2.memberFunction(obj1);
}
