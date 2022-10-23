#include <iostream>
/*ISNA NUR AMALIA
A11.2022.14330 klp: 4108
Senin, 10 oktober 2022
Dibuat di D3G, kos
*/
using namespace std;

int main()
{
    //Kasus 5 - Uang anak kos
    int u;
    int bulanan;

    cout << "Input uang: ";
    cin >> u;
    bulanan = u-1200000;

    if(u<1200000){
        cout << "Input tidak valid!" << endl;
    }
    else if(bulanan<500000){
        cout << "Soni tidak bisa menonton konser karena uang kurang" << endl;
    }
    else if(500000<=bulanan&&bulanan<1000000){
        cout << "Soni jadi menonton konser dengan tempat duduk biasa" << endl;
    }
    else{
        cout << "Soni jadi menonton konser dengan tempat duduk VIP" << endl;
    }

    return 0;
}
