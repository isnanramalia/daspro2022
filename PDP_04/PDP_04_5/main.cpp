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

    cin >> p;
    cin >> l;
    cin >> kesepakatan;
    hasil= p*l;
    hasilbagi= hasil/2;
    cout << "\n" << hasil;
    if(kesepakatan=="setuju")
    {
        cout << "\n" << hasilbagi << "\n";
    }

    if(kesepakatan=="tidak")
    {
        cout << "\n" << hasil << "\n";
    }

    return 0;
}
