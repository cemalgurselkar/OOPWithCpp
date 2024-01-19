#include <iostream>
using namespace std;
class A{
	public:
		int i;
};
class B: virtual public A{
	public:
		int j;
};
class C: virtual public A{
	public:
		int k;
};
class D: public B,public C{
	public:
		int product(){
			return i*j*k;
		}
};
int main()
{
	D ob;
	ob.i = 4;
	ob.j = 9;
	ob.k = 10;
	cout<<"Product is: "<<ob.product()<<endl;
	return 0;
}
