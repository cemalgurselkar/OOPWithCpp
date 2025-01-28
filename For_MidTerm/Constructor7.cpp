#include <iostream>
using namespace std;

class myclass {
public:
    double* arr; // Dinamik olarak ayrılacak dizi
    int size;    // Dizinin boyutu

    // Constructor: Array ve boyutunu alır
    myclass(double input_arr[], int s) {
        size = s;
        arr = new double[size]; // Bellek ayırma
        for (int i = 0; i < size; i++) {
            arr[i] = input_arr[i]; // Değerleri kopyala
        }
        cout << "Constructing object with array elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Destructor
    ~myclass() {
        cout << "Destroying object with array elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        delete[] arr; // Belleği serbest bırak
    }

    // Diziyi gösteren metot
    void show_array() {
        cout << "Array elements are: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    double myarray[] = {1.1, 2.2, 3.3, 4.4}; // Bir array tanımla
    int array_size = sizeof(myarray) / sizeof(myarray[0]); // Dizinin boyutunu hesapla

    myclass obx(myarray, array_size); // Array'i sınıfa gönder
    obx.show_array(); // Diziyi göster

    return 0;
}
