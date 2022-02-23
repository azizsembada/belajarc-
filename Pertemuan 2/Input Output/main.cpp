#include <iostream>
using namespace std;

int main() {
    int vint;
    double vdouble;
    char vchar;
    string vsring;
    bool vbool;

    cout << "NIM: ";
    cin >> vint;
    cout << "Nama: ";
    cin >> vsring;
    cout << "IPK: ";
    cin >> vdouble;
    cout << "Kelas: ";
    cin >> vchar;

    cout << "NIM: " << vint << endl;
    cout << "Nama: " << vsring << endl;
    cout << "IPK: " << vdouble << endl;
    cout << "Kelas: " << vchar << endl;
}
