#include <iostream>

using namespace std;

int main()
{
    //JUDUL: Bilangan Genap
    //KAMUS
    int a;
    int b;
    //ALGORITMA
    cin >> a;
    if(a%2==0)//sisa hasil bagi 2, hasilnya 0
    {
     cout << a << endl;
    }
    cout << "Selesai" << endl;


    //ALGORITMA2
    cin >> b;
    if(b%2==0 && b>0)//a mod 2, hasilnya 0 dan bilangan bulat
    {
        cout << b << endl;
    }
    cout << "Selesai cek" << endl;


    return 0;

}
