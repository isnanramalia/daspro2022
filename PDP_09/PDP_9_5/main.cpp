#include <iostream>
/*ISNA NUR AMALIA
A11.2022.14330 klp: 4108
Rabu, 16 november 2022
*/
using namespace std;

int main()
{
    int uang, out;

    cout << "saldo awal: ";
    cin >> uang;

    while(uang>=0) {
        cout << "pengeluaran Soni hari ini (isikan -1 untuk keluar): ";
        cin >> out;
        if(uang<out)
        {
            cout << "saldo tidak cukup" << endl;
            break;
        }
        if(out==-1) {
            break;
        }
        uang=uang-out;
    }
    cout << "sisa saldo: " << uang;
    return 0;
}
