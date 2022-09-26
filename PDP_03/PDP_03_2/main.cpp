#include <iostream>
/*
Isna Nur Amalia
A11.2022.14330
Klp: 4108
*/
using namespace std;

int main()
{
    //Kasus 2 - Selisih luas 2 lingkaran (medium)
    float L1, L2, L3, r1, r2;
    float phi = 3.14;

    cout << "SELISIH LUAS 2 LINGKARAN" << "\n\n";
    cout << "Masukkan jari-jari lingkaran pertama (r1) = ";
    cin >> r1;
    cout << "Masukkan jari-jari lingkaran kedua (r2) = ";
    cin >> r2;
    L1 = phi*r1*r1;
    L2 = phi*r2*r2;
    L3 = L1-L2;
    cout << "\n\n" << "Selisih luas dari kedua lingkaran adalah : " << L3;
    cout << "\n";
    return 0;
}
