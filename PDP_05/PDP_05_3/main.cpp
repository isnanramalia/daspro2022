#include <iostream>
/*ISNA NUR AMALIA
A11.2022.14330 klp: 4108
Senin, 3 oktober 2022
Dibuat di D3G
*/
using namespace std;

int main()
{
    //Kasus 3 - Undangan ulang tahun
    int usia;

    cout << "input usia: ";
    cin >> usia;

    if(usia<=17)
    {
        cout << "diundang\n";
    }
    else
    {
        cout << "tidak diundang\n";
    }

    return 0;
}
