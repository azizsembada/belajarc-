#include <iostream>

using namespace std;

int panjang,jari2,lebar,alas,tinggi,sisi,pilihan,a,b,menu,menu2,ulang=1,PilihUlang;
double luas,volume,keliling;
float phi=3.14;

int repeatCal(){
    //Perulangan kalkulator
    cout << "=====================" << endl;
    cout << "Repeat ?" << endl;
    cout << "1. Ya" << endl;
    cout << "2. Tidak" << endl;
    cout << "Masukan Pilihan :" << endl;
    cin>>PilihUlang;
    if(PilihUlang==1){
        ulang=1;
    }
    else{
        ulang=0;
    }
}
void luasSegitiga(){
    cout << "alas :";
    cin>>alas;
    cout << "tinggi :";
    cin>>tinggi;
    luas=(0.5*alas)*tinggi;
    cout << "Hasil :"<<luas<< endl;
}

void luasPersegi(){
    cout << "sisi :";
    cin>>sisi;
    luas=sisi*sisi;
    cout << "Hasil :"<<luas<< endl;
}

void luasPTrapesium(){
    cout << "a :";
    cin>>a;
    cout << "b :";
    cin>>b;
    luas=((a+b)/2)*tinggi;
    cout << "Hasil :"<<luas<< endl;
}

void bangunDatar(){
    cout << "1. Luas Segitiga" << endl;
    cout << "2. Luas Persegi" << endl;
    cout << "3. Luas Trapesium" << endl;
    cout << "Masukan Pilihan :";
    cin>>pilihan;
    if (pilihan == 1) {//luas segitiga
        luasSegitiga();
        repeatCal();
    }
    else if (pilihan == 2) {//luas persegi
        luasPersegi();
        repeatCal();
    }
    else if (pilihan == 3) {// luas Trapesium
        luasPTrapesium();
        repeatCal();
    }
}
void kubus(){
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
            cout << "Hasil :"<<volume<< endl;
            repeatCal();
            break;
        case 2:
            cout << "masukan sisi :";
            cin>>sisi;
            keliling=12*sisi;
            cout << "Hasil :"<<keliling<< endl;
            repeatCal();
            break;
    }
}
void balok(){
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
            cout << "Hasil :"<<volume<< endl;
            repeatCal();
            break;
        case 2:
            cout << "masukan sisi :";
            cin>>sisi;
            keliling=(4*panjang)+(4*lebar)+(4*tinggi);
            cout << "Hasil :"<<keliling<< endl;
            repeatCal();
            break;
        }
}
void kerucut(){
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
            cout << "Hasil :"<<volume<< endl;
            repeatCal();
        break;
        case 2:
            cout << "masukan Jari - Jari :";
            cin>>jari2;
            keliling=2*phi*jari2;
            cout << "Hasil :"<<keliling<< endl;
            repeatCal();
        break;
            }
        }
}
void bangunRuang(){
    cout << "Pilih Bangun Ruang" << endl;
    cout << "1. Kubus" << endl;
    cout << "2. Balok" << endl;
    cout << "3. Kerucut" << endl;
    cout << "Masukan Pilihan :";
    cin>>pilihan;
    if (pilihan == 1) {//Kubus
        kubus();
    }
    else if (pilihan == 2) {//balok
        balok();
        }
    else if (pilihan == 3) {//kerucut
        kerucut();
}

int main()
{
    while(ulang){
        cout << "Kalkulator Sederhana" << endl;
        cout << "=====================" << endl;
        cout << "1. Bangun Datar" << endl;
        cout << "2. Bangun Ruang" << endl;
        cout << "=====================" << endl;
        cout << "Masukan Pilihan :";
        cin>>menu;
        if(menu==1){// Bangun Datar
            bangunDatar();
        }
        else if(menu==2){// Bangun Ruang
            bangunRuang();
        }
    }
}
