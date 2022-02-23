#include <iostream>

using namespace std;

int main()
{
    int panjang,jari2,lebar,alas,tinggi,sisi,pilihan,a,b,menu,menu2;
    double luas,volume,keliling;
    float phi=3.14;

    cout << "Kalkulator Sederhana" << endl;
    cout << "=====================" << endl;
    cout << "1. Bangun Datar" << endl;
    cout << "2. Bangun Ruang" << endl;
    cout << "=====================" << endl;
    cout << "Masukan Pilihan :";
    cin>>menu;
    if(menu==1){// Bangun Datar
        cout << "1. Luas Segitiga" << endl;
        cout << "2. Luas Persegi" << endl;
        cout << "3. Luas Trapesium" << endl;
        cout << "Masukan Pilihan :";
        cin>>pilihan;

        if (pilihan == 1) {//luas segitiga
            cout << "alas :";
            cin>>alas;
            cout << "tinggi :";
            cin>>tinggi;
            luas=(0.5*alas)*tinggi;
            cout << "Hasil :"<<luas;
        }
        else if (pilihan == 2) {//luas persegi
            cout << "sisi :";
            cin>>sisi;
            luas=sisi*sisi;
            cout << "Hasil :"<<luas;
        }
        else if (pilihan == 3) {// luas Trapesium
            cout << "a :";
            cin>>a;
            cout << "b :";
            cin>>b;
            luas=((a+b)/2)*tinggi;
            cout << "Hasil :"<<luas;
        }
    }
    else if(menu==2){// Bangun Ruang
        cout << "Pilih Bangun Ruang" << endl;
        cout << "1. Kubus" << endl;
        cout << "2. Balok" << endl;
        cout << "3. Kerucut" << endl;
        cout << "Masukan Pilihan :";
        cin>>pilihan;
        if (pilihan == 1) {//Kubus
            cout << "Pilih Perhitungan" << endl;
            cout << "1. Volume" << endl;
            cout << "2. Keliling" << endl;
            cout << "Masukan Pilihan :";
            cin>>menu2;
            switch(menu2) {
              case 1:
                cout << "masukan sisi :";
                cin>>sisi;
                volume=sisi*sisi*sisi;
                cout << "Hasil :"<<volume;
                break;
              case 2:
                cout << "masukan sisi :";
                cin>>sisi;
                keliling=12*sisi;
                cout << "Hasil :"<<keliling;
                break;
            }
        }
        else if (pilihan == 2) {//balok
            cout << "Pilih Perhitungan" << endl;
            cout << "1. Volume" << endl;
            cout << "2. Keliling" << endl;
            cout << "Masukan Pilihan :";
            cin>>menu2;
            switch(menu2) {
              case 1:
                cout << "masukan Panjang :";
                cin>>panjang;
                cout << "masukan Lebar :";
                cin>>lebar;
                cout << "masukan Tinggi :";
                cin>>tinggi;
                volume=panjang*lebar*tinggi;
                cout << "Hasil :"<<volume;
                break;
              case 2:
                cout << "masukan sisi :";
                cin>>sisi;
                keliling=(4*panjang)+(4*lebar)+(4*tinggi);
                cout << "Hasil :"<<keliling;
                break;
            }
        }
        else if (pilihan == 3) {//kerucut
            cout << "Pilih Perhitungan" << endl;
            cout << "1. Volume" << endl;
            cout << "2. Keliling" << endl;
            cout << "Masukan Pilihan :";
            cin>>menu2;
            switch(menu2) {
                case 1:
                    cout << "masukan Jari-jari :";
                    cin>>jari2;
                    cout << "masukan Tinggi :";
                    cin>>tinggi;
                    volume=0.33*phi*jari2*jari2*tinggi;
                    cout << "Hasil :"<<volume;
                    break;
                case 2:
                    cout << "masukan Jari - Jari :";
                    cin>>jari2;
                    keliling=2*phi*jari2;
                    cout << "Hasil :"<<keliling;
                    break;
                }
        }
    }
}
