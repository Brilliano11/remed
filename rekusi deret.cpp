#include <iostream>
using namespace std;

double deret(int n) {
    if (n == 1) {
        return 1.0;
    } else {
        if (n % 2 == 0) {
            return deret(n - 1) - 1.0 / n;  // Jika genap, kurangi
        } else {
            return deret(n - 1) + 1.0 / n;  // Jika ganjil, tambah
        }
    }
}

int main() {
    int n;
    cout << "Masukkan nilai n: ";
    cin >> n;
    
    double hasil = deret(n);
    cout << "Hasil deret untuk n = " << n << " adalah: " << hasil << endl;

    return 0;
}

