#include <iostream>
/*ISNA NUR AMALIA
Senin, 10 Oktober 2022 - DG
IF, Else If, Else
*/
using namespace std;

int main()
{
    //Positif negatif nol
    int a;

    cin >> a;

    if(a>0)
        cout << "Positif" << endl;
    else if(a<0)
        cout << "Negatif" << endl;
    else
        cout << "Nol" << endl;

    //jika aksi di dalam if/else if/
    //hanya 1, boleh tanpa ()

    //KALENDER JANUARI-MARET
    string bulan;
    if(a==1){
        bulan = "Januari";
    }
    else if(a==2){
        bulan = "Februari";
    }
    else if(a==3){
        string bulannya;
        bulan = "Maret";
        bulannya = "Maret";
    }
    else{
        bulan = "Inputan kamu dalah!";
    }


    //SWITCH ADALAH CARA LAN SEPERTI IF ELSE
    //swtich hanya bisa untuk sama dengan (=)
    switch(a)
    {
    case 1:
        bulan = "Januari";
        break;

    case 2:
        bulan = "Februari";
        break;
    case 3:
        bulan = "Maret";
        break;
    default:
        bulan = "Inputan kamu salah!";
    }
    cout << bulan << endl;

    return 0;
}
