#include <iostream>
/*
Isna Nur Amalia - A11.2022.14330
Senin, 12 September 2022 - D2G
Variabel
*/
using namespace std;

int main()
{

    //variabel
    int umur, umr;//tipe variabel nama variabel
    int u;//untuk bil. bulat tanpa koma
    float tinggi;// untuk bil. dengan koma
    char ukuranBaju = 'M';//1 huruf
    string nama;

    umur = 18;
    tinggi = 150;
    nama = "Isna Nur Amalia";


    cout << "Nama saya " << nama << endl;
    cout << "Umur saya " << umur << " tahun dengan tinggi " << tinggi<< "cm\n";
    cout << "Ukuran baju saya " << ukuranBaju << endl;


    //iput
    cout << "\nMasukkan nama = ";
    //kalau input dengan spasi ada cara lain
    cin >> nama;
    cout << "Masukkan umur = ";
    cin >> umur;
    cout << "Masukkan tinggi = ";
    cin >> tinggi;

    cout << "Nama saya " << nama << endl;
    cout << "Umur saya " << umur << " tahun dengan tinggi " << tinggi << "cm\n";
    cout << "Ukuran baju saya " << ukuranBaju << endl;


    return 0;
}
