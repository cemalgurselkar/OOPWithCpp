#include <iostream>
using namespace std;

class samp{
	private:
		int a;
	protected:
		int b;
	public:
		int c;
	samp (int n,int m)
	{
		a=n;
		b=m;
	}
	int get_a()
	{
		return a;
	}
	int get_b()
	{
		return b;
	}
};

int main()
{
	samp ob(10,20);
	/*
	ob.b= 99; Error becuase B is protect. it cannot receive values from outside.
	*/
	
	ob.c=30;
	cout<<ob.get_a()<<" "<<ob.get_b()<<" "<<ob.c<<endl;
	return 0;
}
