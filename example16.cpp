#include <iostream>
using namespace std;

class coord{
private:
	int x,y;
public:
	coord(){
		x=0;
		y=0;
	}
	coord(int i,int j){
		x=i;
		y=j;
	}
	void get_xy(int &i,int &j){
		i=x;
		j=y;
	}
	coord operator++();//prefix increment
	coord operator++(int notused);//postfix increment 
	coord operator=(coord ob2);
};

coord coord::operator=(coord ob2){
	x = ob2.x;
	y = ob2.y;
	return *this; //return the object that generates
}

coord coord::operator++(){
	x++;
	y++;
	return *this;
}

coord coord::operator++(int notused){
	coord temp;
	temp.x = x;
	temp.y = y;
	x++;
	y++;
	return temp;
}

int main()
{
	coord o1(10,10),o2,o3;
	int x,y;
	o2=++o1;//prefix increment.
	o1.get_xy(x,y);
	cout<<"(++o1) X:"<<x<<", Y:"<<y<<endl;
	o2.get_xy(x,y);
	cout<<"(o2) X:"<<x<<", Y"<<y<<endl;
	o2=o1++;//postfix increment.
	o1.get_xy(x,y);
	cout<<"(o1++) X:"<<x<<", Y:"<<y<<endl;
	o2.get_xy(x,y);
	cout<<"(o2) X:"<<x<<", Y:"<<y<<endl;
	return 0;
}
