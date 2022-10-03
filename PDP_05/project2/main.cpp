#include <iostream>

using namespace std;

int main()
{
    int a;
    string hasilPositif;

    cout << "Masukkan angka = ";
    cin >> a ;
    cout << "Apakah angka " << a << " positif? ";
    //untuk cara urut
    if(a>0) //apakah a positif?
    {
        //jika iya, ini ke-run
        cout << "ya.\n";
    }
    else
    {
        //jika tidak, ini ke-run
        cout << "tidak.\n";
    }

    //untuk cara cepat
    hasilPositif = (a>0)? "ya.\n" : "tidak.\n";
    cout << "Apakah angka " << a << " positif? " << hasilPositif;

    //====================================================================
    int b;
    cout << "\n\nMasukkan angka = ";
    cin >> b;
    cout << "Angka " << b << " merupakan angka ";
    if(b%2==0)//apakah b genap?
    {
        cout << "genap.\n";
    }
    else
    {
        cout << "ganjil.\n";
    }

    //==================================================================
    int c,d;
    int hasilKali,hasilMax;
    //untuk angka lebih besar lebih kecil
    cout << "\n\nMasukkan angka 1 = ";
    cin >> c;
    cout << "Masukkan angka 2 = ";
    cin >> d;
    if(b%2==0)//apakah b genap?
    {
        cout << "genap.\n";
    }
    else
    {
        cout << "ganjil.\n";
    }
    cout << "Angka terbesar dari " << c << " dan " << d << " adalah ";
    if(c>=d)
    {
        cout << c;
    }
    else
    {
        cout << d;
    }

    //jika agnka terbesar lalu * 100, output hasilnya
    //jika angka terkecil lalu * 10, output hasilnya
    if(c>=d)
    {
        cout << c << endl;
        cout << c*100 << endl;
        hasilKali = c*10;
    }
    else
    {
        cout << d << endl;
        cout << d*10 << endl;
        hasilKali = d*10;
    }
    cout << hasilKali << endl;
    cout << "Angka terbesar dari "





    return 0;
}
