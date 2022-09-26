#include <iostream>
/*
Isna Nur Amalia - A11.2022.14330 - Kelompok 4108
*/
using namespace std;

int main()
{
    //Kasus 5- Kebut-kebutan (HARD)
    float Vt = 21.55;
    float Vo = 0;
    float t = 12.5;
    float a;

    a = (Vt - Vo)/t;
    cout << "Diketahui" << "\n";
    cout << "Nilai vt = " << Vt << "\n";
    cout << "Nilai vo = " << Vo << "\n";
    cout << "Nilai t = " << t << "\n\n";
    cout << "Rumus" << "\n";
    cout << "Vt = Vo + a * t" << "\n";
    cout << "a = (Vt - Vo) / t" << "\n";
    cout << "Maka percepatan yang dihasilkan adalah "<< a << endl;
    return 0;
}
