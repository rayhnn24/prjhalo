#include <iostream>
#include <string>
using namespace std;

int main() {
    int jumlah;
    cout << "Masukkan jumlah nama: ";
    cin >> jumlah;

    string* nama = new string[jumlah];

    for (int i = 0; i < jumlah; i++) {
        cout << "Masukkan nama ke-" << i + 1 << ": ";
        cin >> nama[i];
    }

    cout << "\nDaftar Nama:\n";
    for (int i = 0; i < jumlah; i++) {
        cout << nama[i] << endl;
    }

    delete[] nama;
   
    system("pause");
    return 0;
}
