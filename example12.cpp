#include <iostream>
using namespace std;

class coord{
	private:
		int x,y;
	
	public:
		coord()
		{
			x=0;
			y=0;
		}
		coord(int i,int j){
			x = i;
			y = j;
		}
		void get_xy(int &i,int &j)
		{
			i=x;
			j=y;
		}
		coord operator+(coord ab2);
};

coord coord::operator+(coord ab2){
	coord temp;
	temp.x = x+ab2.x;
	temp.y = y+ab2.y;
	return temp;
}

int main()
{
	coord o1(10,10),o2(5,3),o3,o4;
	int x,y;
	
	o3 = o1+o2;
	o3.get_xy(x,y);
	cout << "(o1+o2) X:"<<x<<", Y:"<<y<<endl;
	
	o3 = o1+o2+o3;
	return 0;
}
