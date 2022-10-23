#include <iostream>
/*ISNA NUR AMALIA
A11.2022.14330 klp: 4108
Senin, 3 oktober 2022
Dibuat di D3G & Kos
*/
using namespace std;

int main()
{
    //Kasus 1 - soal ujian
    int a;
    cout << "input nim: ";
    cin >> a;

    if(a%2==0)
    {
        cout << "Tipe A" << endl;
        //jika genap
    }
    else
    {
        cout << "Tipe B" << endl;
        //jika ganjil
    }
    return 0;
}
