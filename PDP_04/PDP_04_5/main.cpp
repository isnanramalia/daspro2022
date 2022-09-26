#include <iostream>
/*
ISNA NUR AMALIA - A11.2022.14330
26 sep 2022 - Kos
*/
using namespace std;

int main()
{
    //Kasus 5 - Sengketa Lahan
    //pak eko -> pak joni & pak soni |1 thn kemudian| --> akan dibagi 2
    //pak eko lupa p*l tanah
    //tahan akan dibagi 2 --> jika setuju = bagi sama rata | jika tidak setuju = tanah tdk jadi di jual
    float p, l;
    float hasil;
    float hasilbagi;
    string kesepakatan;

    cout << "Masukkan panjang tanah: ";
    cin >> p;
    cout << "Masukkan lebar tanah: ";
    cin >> l;
    cout << "Kesepakatan (setuju/tidak setuju): ";
    cin >> kesepakatan;
    hasil= p*l;
    hasilbagi= hasil/2;
    cout << "\n" << "Hasil p*l tanah adalah " << hasil << " meter persegi";
    if(kesepakatan=="setuju")
    {
        cout << "\n" << "Pak Joni dan Pak Soni masing-masing mendapatkan " << hasilbagi << " meter persegi" << "\n";
    }

    if(kesepakatan=="tidak")
    {
        cout << "\n" << "Tanah tidak jadi dijual untuk keduanya, maka tanah Pak Eko tetap " << hasil << " meter persegi" << "\n";
    }

    return 0;
}
