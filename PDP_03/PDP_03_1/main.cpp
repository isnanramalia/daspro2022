#include <iostream>
/*
Isna Nur Amalia
A11.2022.14330
Klp: 4108
*/
using namespace std;

int main()
{
    //Kasus 1 - Volume tabung (easy)
    float v, r, t, phi;
    phi = 3.14;

    cout << "Masukkan jari-jari (meter) = " ;
    cin >> r;
    cout << "Masukkan tinggi (meter) = " ;
    cin >> t;
    v = phi*r*r*t;
    cout << "\n\n" << "Dari hasil perkalian rumus v = phi*r*r*t maka volume tabung dengan jari-jari " << r << " meter dan tinggi " << t << " meter adalah " << v << " meter kubik " << "\n";
    return 0;
}
