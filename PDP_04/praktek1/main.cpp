#include <iostream>
/*
Isna Nur Amalia - A11.2022.14330
Senin, 26 Sep 2022 - D2G
Percabangan Tunggal
*/
using namespace std;

int main()
{
    //JUDUL: Program Validasi
    //KAMUS
    int a;
    const int X = 10;

    //ALGORITMA INT
    cin >> a;
    if(a>0) {
        cout << "Valid\n";
    }
    cout << "Selesai cek\n\n" << endl;


    //ALGORTMA CONST
    cin >> a;
    if(a>X) {
        cout << a << endl;
    }
    cout << "Selesai";
    return 0;
}
