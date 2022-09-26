#include <iostream>
/*
Isna Nur Amalia - A11.2022.14330 - Kelompok 4108
*/
using namespace std;
int main()
{
//Kasus 4 - Cek Error (MEDIUM)
int a = 1;
int b = 4;

//Algoritmao
cout << "Hasil a yang pertama: " << a << endl;
cout << "Hasil b yang pertama: " << b << endl;
b = a;
a = -b;
cout << "Hasil a yang kedua: " << a << endl;
cout << "Hasil b yang kedua: " << b << endl;
a = b + 1;
b = a / b;
cout << "Hasil a yang ketiga: " << a << endl;
cout << "Hasil b yang ketiga: " << b << endl;
return 0;
}
