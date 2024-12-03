#include <iostream>
using namespace std;

class MyClass {
    int size;
    int *p;

public:
    double x, y, z;

    MyClass(int sz) {
        p = new int[sz];
        if (!p){
            exit(1);
        };
        size = sz;

        for (int i = 0; i < size; i++) {
            p[i] = 2 * i;
        }
    }

    ~MyClass() {
        delete[] p;
    }
    int get(int i) {
        return p[i];
    }
    int getSize() {
        return size;
    }
};

void show(MyClass a) {
    cout << "x = " << a.x << endl;
    cout << "y = " << a.y << endl;
    cout << "z = " << a.z << endl;
    cout << "array: ";

    for (int i = 0; i < a.getSize(); i++) {
        cout << a.get(i) << " ";
    }
    cout << endl;
}
int main() {
    MyClass obj1(10);
    show(obj1);
    return 0;
}
