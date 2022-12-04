#include <iostream>
/*Isna Nur Amalia
Senin, 17 Okt 2022 - D2G*/
using namespace std;

int main()
{
    int umur, pendapatan, tanggungan;
    char kerja, sekolah;


    cout << "Masukkan umur: " ;
    cin >> umur;

    if(umur>=18){
        cout << "Masukkan status bekerja: ";
        cin >> kerja ;
        if(kerja == 'y'){
            cout << "Masukkan pendapatan: ";
            cin >> pendapatan;
            cout << "Masukkan tanggungan: ";
            cin >> tanggungan;
            if(pendapatan/tanggungan < 300000){
                cout << "Penduduk miskin";
            }
            else{
            cout << "Bukan penduduk miskin";
            }
        }else{
         cout << "Penduduk miskin";
         }
    }
    else{
        cout << "Masukkan status sekolah: ";
        cin >> sekolah;
        if(sekolah == 'y'){
            cout << "Bukan penduduk miskin";
        }else
        cout << "Penduduk miskin";

    }
    return 0;
}
