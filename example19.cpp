#include <iostream>
using namespace std;
//Passing argument to the derived class's consturctor.
class base{
	public:
		base()
		{
			cout<<"Constructor base class"<<endl;
		}
		~base()
		{
			cout<<"Destructor base class"<<endl;
		}
};

class derived: public base{
	private:
		int j;
	public:
		derived(int n){
			j=n;
		}
		~derived()
		{
			cout<<"Destructor derived class"<<endl;
		}
		void showj()
		{
			cout<<"Constructor derived class: "<<j<<endl;
		}
};

int main()
{
	derived ob(19);
	ob.showj();
	return 0;
}
