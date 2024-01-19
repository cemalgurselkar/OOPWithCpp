#include <iostream>
using namespace std;

class myclass{
	public:
		double a,b;
		myclass(double x,double y)
		{
			cout <<"Constructing object a="<<a<<" b="<<b<<endl;
		}
		~myclass()
		{
			cout <<"Destructing object a="<<a<<" b="<<b<<endl;
		}
		void show_ab()
		{
			cout <<"Value of a="<<a<<" b="<<b<<endl;
		}
};
myclass fun1(myclass *ab1)
{
	myclass ab2(4,5);
	ab2.a = ab2.a*ab1->a;
	ab2.b = ab2.b*ab1->b;
	return ab2;
}
int main()
{
	myclass abx(4,6),aby(10,20);
	aby=fun1(&abx);
	aby.show_ab();
	return 0;
	return 0;
}
