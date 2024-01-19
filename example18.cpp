#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;
class strtype{
private:
	char *p;
	int len;
public:
	strtype(char *s); //Consturctor
	~strtype(){
		delete []p; //destructor
	}
	char *get(){
		return p;
	}
	strtype &operator=(strtype &ob);
};

strtype::strtype(char *s)
{
	int l;
	l=strlen(s)+1;
	p=new char [l];
	if(!p){
		cout<<"Alloction error"<<endl;
		exit(1);
	}
	strcpy(p,s);
	len=l;
}

strtype & strtype::operator=(strtype &ob){//assign an object
	if(len<ob.len){
		delete [] p;
		p = new char [ob.len];
		if (!p){
			cout <<"Alloction error"<<endl;
			exit(1);
		}
	}
	len = ob.len;
	strcpy(p,ob.p);
	return *this;
}

int main()
{
	strtype a("Hello"),b("There");
	cout <<a.get()<<endl;
	cout <<b.get()<<endl;
	a=b;
	cout<<a.get()<<endl;
	cout<<b.get()<<endl;
	return 0;
}
