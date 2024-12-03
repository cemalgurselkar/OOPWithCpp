#include <iostream>
using namespace std;

class test{
	public:
		test()
		{
			cout<<"Constructor executed"<<endl;
		}
		~test()
		{
			cout<<"Destructor executed"<<endl;
		}
};
int main()
{
	test t,t1,t2,t3,t4;
	return 0;
}
