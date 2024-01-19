#include <iostream> 
using namespace std; 
  
class Demo{ 
   int a, b; 
    public: 
    Demo()   // default constructor 
    { 
        cout << "Default Constructor" << endl; 
    } 
    Demo(int a, int b):a(a),b(b)  //parameterised constructor 
    { 
        cout << "parameterized constructor -values a=" << a  << " b="<< b << endl; 
    } 
      
}instance(10,20); 
  
  
int main() {
	
    return 0; 
}
