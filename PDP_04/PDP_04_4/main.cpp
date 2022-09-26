#include <iostream>
/*
ISNA NUR AMALIA - A11.2022.14330
26 sep 2022 - D2G
*/
using namespace std;

int main()
{
    //KASUS 4 - Luas Persegi atau Persegi panjang
    //luas persegi = s*s
    //luas persegi pjg = p*l
    //input panjang dan lebar
    //output "ini persegi"

    float p, l;
    float hasil;

    cout << "Masukkan panjang: " ;
    cin >> p;
    cout << "Masukkan lebar: ";
    cin >> l;
    hasil = p*l;
    cout << "Hasilnya adalah " << hasil << endl;
    if(p==l)
    {
        cout << "Ini adalah persegi" << endl;
    }
    if(p!=l)
    {
        cout << "Ini adalah persegi panjang" << endl;
    }



    return 0;
}
