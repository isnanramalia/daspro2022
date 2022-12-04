#include <iostream>

using namespace std;

int main()
{
    int umur, juara, hadiah;
    bool salah = false;

    cout << "Masukkan umur: ";
    cin >> umur;
    if (umur >= 16 && umur <= 18)
        hadiah = 5000000;
    else if (umur >= 19 && umur <= 24)
        hadiah = 6000000;
    else if (umur >= 25)
        hadiah = 7000000;
    else
        salah = true;

    cin >> juara;
    if (juara >= 1 && juara <= 3)
        hadiah = (hadiah - ((juara - 1) * 1000000)) * 0.95;
    else
        salah = true;
    if (!salah)
        cout << hadiah;
    else
        cout << "inputan salah";

    return 0;
}
