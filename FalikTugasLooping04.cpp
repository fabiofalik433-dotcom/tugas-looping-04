#include <iostream>
using namespace std;

int main() {
    int n, data, i = 0;
    int jumGenap = 0, jumGanjil = 0;

    // Input jumlah data
    cout << "Masukkan jumlah data: ";
    cin >> n;

    // Perulangan do...while untuk input data dan proses
    do {
        cout << "Input data ke-" << (i + 1) << ": ";
        cin >> data;

        // Cek apakah bilangan genap atau ganjil
        if (data % 2 == 0) {
            jumGenap = jumGenap + data;
        }
        else {
            jumGanjil = jumGanjil + data;
        }

        i++;
    } while (i < n);

    // Output hasil
    cout << "\n=== HASIL ===" << endl;
    cout << "Jumlah total bilangan ganjil : " << jumGanjil << endl;
    cout << "Jumlah total bilangan genap : " << jumGenap << endl;

    return 0;
}
