#include <iostream>
/*
Isna Nur Amalia - A11.2022.14330
Senin, 12 September 2022 - D2G
Variabel
*/


using namespace std;

int main()
{
    //varibel
    int umur, umr; // tipe varibel nama variabel
    int u;//untuk bil. bulat tanpa koma
    float tinggi;//untuk bil. dengan koma
    char ukuranBaju = 'M';//1 huruf

    umur = 18;
    tinggi = 150;
    nama = "Isna Nur Amalia";
    string nama;//lebih dari 1 huruf

    cout << "Nama saya " << nama << endl;
    cout << "Umur saya = " <<umur << " tahun dengan tinggi " << tinggi << "cm\n";
    cout << "Ukuran baju saya " << ukuranBaju << endl;


    cout << "\nMasukkan nama = ";
    //kalau input pake spasi dengan cara lain
    cin >> nama;
    cout << "Masukkan umur = ";
    cin >> umur;
    cout << "Masukkan tinggi = ";
    cin >> tinggi;

    cout << "Nama saya " << nama << endl;
    cout << "Umur saya = " <<umur << " tahun dengan tinggi " << tinggi << "cm\n";
    cout << "Ukuran baju saya " << ukuranBaju << endl;


    //2.5 juta tiap meter persegi
    //input panjang, lebar
    //Output kalimat
    //"Tanah panjgan xx m lebar xx m dengan
    //luas xx m2 harganya Rp xxxxxxx"
    float panjang, lebar, luas;
    int harga;

    cout << "Masukkan panjang = ";
    cin >> panjang;
    cout << "Masukkan lebar = ";
    cin >> lebar;


    luas = panjang * lebar;
    harga = luas * 2500000;


    cout << "Tanah dengan panjang " << panjang << " m dan lebar " << lebar << " m dengan luas";
    cout << luas << "m2 harganya Rp " << harga << ",oo\n";



    return 0;
}
