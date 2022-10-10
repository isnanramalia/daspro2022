#include <iostream>
/*ISNA NUR AMALIA
A11.2022.14330 klp: 4108
Senin, 10 oktober 2022
Dibuat di D3G, kos
*/
using namespace std;

int main()
{
    int u;
    cout << "Input uang: ";
    cin >> u;

    if(u<1200000){
        cout << "Input tidak valid!" << endl;
        return 1;
    }
    else if(1200000<=u<2000000){
        cout << "Soni tidak bisa menonton konser karena uang kurang" << endl;
        return 1;
    }
    else if(2000000<=u<5000000){
        cout << "Soni jadi menonton konser dengan tempat duduk biasa" << endl;
        return 1;
    }
    else if(u>=5000000){
        cout << "Soni jadi menonton konser dengan tempat duduk VIP" << endl;
        return 1;
    }

    return 0;
}
