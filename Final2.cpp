#include <iostream>
using namespace std;
class coord{
	public:
		int i,j,x,y;
		
		coord(int i=10,int j=15){
			x=i;
			y=j;
		}
		coord operator+(const coord &obj){
			coord temp;
			temp.x = x+2*obj.x;
			temp.y = y+2*obj.y;
			return temp;
		}
		coord operator*(const coord &obj){
			coord temp;
			temp.x = x*obj.x;
			temp.y = y*obj.y;
			return temp;
		}
		void show_xy(){
			cout<<"X="<<x<<" Y="<<y<<endl;
		}
};
int main(){
	coord o1(1,2),o2(3,5),o3,o4,o5;
	o3.show_xy();
	o3=o1+o3;
	o3.show_xy();
	o4.show_xy();
	o4=o1+o2+o5;
	o4.show_xy();
	o1.show_xy();
	o1=o1*o2;
	o1.show_xy();
	o3=o1.operator+(o2);
	o2.show_xy();
	return 0;
}
