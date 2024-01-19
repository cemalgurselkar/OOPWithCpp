//Functioning of a friend class
#include <iostream>
using namespace std;

class GFB{
private:
	int private_variable;
protected:
	int protected_variable;
public:
	GFB()
	{
		private_variable = 10;
		protected_variable = 99;
	}
	
	//frined class declaration
	friend class F;
};
//Here, class F is declared as a
//friend inside class GFB. Therefore,F is a friend of class GFB.
//Class F can access the private members of class GFB.
class F{
	public:
		void display(GFB &t)
		{
			cout <<"The value of Private Variable = "<<t.private_variable<<endl;
			cout <<"The value of Protected Variable = "<<t.protected_variable<<endl;
		}
};

int main()
{
	GFB g;
	F fri;
	fri.display(g);
	return 0;
}
