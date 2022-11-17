#include <iostream>

using namespace std;

int main()
{

    /*
    COUNTED LOOP: perulangan jelas berapa kali ; for,
    UNCOUNTED LOOP: perulangan yg tidak jelas brp kali ; while, do/while
    */
    int i;
    cout << "Masukkan angka = ";
    cin >> i;
    cout << "Loop for" << endl;
    for(int a=0; a<i; a++) //awalan, batasan, iterasi
    {
        cout << a << "I love you\n";
    }
        cout << "\n Loop while" << endl;


    cout << "\nLoop while" << endl;
    int a =0;
    while(a<i)
    {
        cout << a+1 << " I love you\n";
        //a++ di cout hanya menampilkan
        //a++, tidak menambah nilai a
        a++; //iterasi
    }


    int a = 0; //awalan
    while(a<i) //batasan
    {
        cout << a << "I love you\n";
        a++; //iterasi
    }





  /*  cout << "\nLoop Do-While" << endl;
    a=0;
    do
    {
        cout << a << "I love you\n";
        a++;
    }while(a<i);
*/

    return 0;
}
