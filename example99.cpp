#include <iostream>
using namespace std;

class samp{
	private:
		int a,b;
	public:
		int set_ab(int i,int j){
			a=i;
			b=j;
		}
		int get_product(){
			return a*b;
		}
};
int main(){
	samp *p;
	int i;
	p = new samp[10];
	if(!p){
		cout<<"Allocation error"<<endl;
		return 1;
	}
	for(i=0;i<10;i++){
		p[i].set_ab(i,i);
	}
	for(i=0;i<10;i++){
		cout<<"Product ["<<i<<"]:"<<p[i].get_product()<<endl;
	}
	return 0;
}
