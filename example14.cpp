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
		x=i;
		y=j;
	}
	coord(int &i,int &j){
		i=x;
		j=y;
	}
	int operator==(coord ob2);
	int operator&&(coord ob2);
};

int coord::operator==(coord ob2){
	return (x==ob2.x) && (y==ob2.y);
}
int coord::operator&&(coord ob2){
	return (x&&ob2.x) && (y&&ob2.y);
}

void f1(coord o1,coord o2,char *x,char *y)
{
	if (o1==o2){
	cout<<x<<" and "<<y<<" are same!"<<endl;
}
else{
	cout<<x<<" and "<<y<<" are different!"<<endl;
}
}

void f2(coord o1,coord o2,char *x,char *y)
{
	if(o1&&o2){
		cout<<x<<" && "<<y<<" is true"<<endl;
	}
	else{
		cout<<x<<" && "<<y<<" is false"<<endl;
	}
}

int main()
{
	coord o1(10,20),o2(5,3),o3(10,20),o4(0,10);
	f1(o1,o2,"o1","o2");
	f1(o1,o3,"o1","o3");
	f2(o1,o2,"o1","o2");
	f2(o1,o4,"o1","o4");
	return 0;
}
