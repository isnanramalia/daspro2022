#include <iostream>
/*ISNA NUR AMALIA
A11.2022.14330 klp: 4108
Senin, 3 oktober 2022
Dibuat di D3G & Kos
*/
using namespace std;

int main()
{
    //Kasus 2 - tukar hadiah
    int tahun;

    cout << "input tahun: ";
    cin >> tahun;
    if(tahun>=2020)
    {
        cout << "Motor sudah tahun 2020\n";
    }
    else
    {
        cout << ((2020-tahun)*2000000) << endl;
    }
    return 0;
}
