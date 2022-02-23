#include <iostream>

using namespace std;

 int penjumlahan(int a,int b){
    int hasil;
    hasil=a+b;
    return hasil;
}

int pengurangan(int a,int b){
    int hasil;
    hasil=a-b;
}

void text(){
    cout<<"kalkulator penjumlahan "<<endl;
    cout<<"======================="<<endl;
}

int main()
{
    int n1,n2,total,total2;
    text();
    cout<<"masukan nilai 1 : ";
    cin>>n1;
    cout<<"masukan nilai 2 : ";
    cin>>n2;
    total=penjumlahan(n1,n2);
    total2=pengurangan(n1,n2);
    cout<<"Hasil : "<<total<<endl;
    cout<<"Hasil 2 : "<<pengurangan(n1,n2)<<endl;
}
