//Function of some class
#include <iostream>
using namespace std;

class base{
private:
	int private_variable;
protected:
	int protected_variable;
public:
	base()
	{
		private_variable = 12;
		protected_variable = 56;
	}
	//Friend Function declaration
	friend void friendFunction(base& obj);
};
//Friend Function Definition
void friendFunction(base& obj)
{
	cout <<"Private Variable: "<<obj.private_variable<<endl;
	cout <<"protected Variable: "<<obj.protected_variable<<endl;
}

int main()
{
	base obj1;
	friendFunction(obj1);
}
