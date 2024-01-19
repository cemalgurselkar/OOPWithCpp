#include <iostream>
using namespace std;

class circle{
	private:
		double radius;
	
	public:
		double area(double r){
			radius = r;
			double area = 3.14*r*r;
			
			cout <<"R is "<<r<<endl;
			cout <<"Area is "<<area<<endl;
		}
};

int main()
{
	circle obj;
	
	obj.area(2.3);
	return 0;
}
