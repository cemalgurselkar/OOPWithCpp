//Virtual Functions
#include <iostream>
using namespace std;
class base{
	public:
		int i;
		base(int x){
			i=x;
		}
		virtual void func(){
			cout<<"using base version of func(): "<<i<<endl;
		}
};
class derived1 :public base{
	public:
		derived1 (int x): base(x){
		}
		void func(){
			cout<<"Using derived1's version func(): ";
			cout<<i*i<<endl;
			}
};
class derived2 :public base{
	public:
		derived2 (int x): base(x){}
		void func(){
			cout<<"using derived2's version of func():";
			cout<<i+i<<endl;
		}
};
int main(){
	base *p,ob(10);
	derived1 ob1(10);
	derived2 ob2(10);
	
	p=&ob;
	p->func();//use base's func()
	
	p=&ob1;
	p->func();//use derived1's func()
	
	p=&ob2;
	p->func();//use derived2's func()
	return 0;
}
