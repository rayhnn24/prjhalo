#include <iostream>
#include <string>
using namespace std;

int main() {
    string name [5];

    name[0] = "Alice";
    name[1] = "Bob";
    name[2] = "Charlie";
    name[3] = "Diana";
    name[4] = "Eve";

    cout << "Daftar Nama:\n";
    for (int i = 0; i < 5; i++) {
        cout << name[i] << endl;
    }


    system("pause");
    return 0;
}
