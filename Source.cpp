#include <iostream>
#include <cmath>
using namespace std;

int pythagoras(int a, int b);

int main() {
    int a, b, hasil;
    cout << "Teorema Pythagoras \n" << endl;
    cout << "Masukkan panjang sisi a: ";
    cin >> a;

    cout << "Masukkan panjang sisi b: ";
    cin >> b;

    hasil = pythagoras(a, b);

    cout << "Panjang sisi c adalah: " << hasil << endl;

    cin.get();
    return 0;
}

int pythagoras(int a, int b) {
    return sqrt(pow(a, 2) + pow(b, 2));
}

// integer bisa diganti dengan double