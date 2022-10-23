#include <iostream>
/*ISNA NUR AMALIA
A11.2022.14330 klp: 4108
Senin, 3 oktober 2022
Dibuat di D3G & Kos
*/
using namespace std;

int main()
{
    //Kasus 4 - IPK
    float ipk;

    cout << "Menentukan predikat kelulusan IPK mahasiswa" << "\n\n";
    cout << "Input IPK: ";
    cin >> ipk;

    if(ipk>=3.5){
        cout << "Dengan pujian/Cumlaude" << "\n";
        return 1;
    }
    else if(ipk>=3.0&&ipk<3.5){
        cout << "Sangat memuaskan/Very Good" << "\n";
        return 1;
    }
    else if(ipk>=2.75&&ipk<3.0){
        cout << "Memuaskan/Good" << "\n\n";
        return 1;
    }


    return 0;
}
