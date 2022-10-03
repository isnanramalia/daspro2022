#include <iostream>

using namespace std;

int main()
{
    float ipk;
    cout << "Menentukan predikat kelulusan IPK mahasiswa" << endl;

    cin >> ipk;
    if(ipk>=3.5)
    {
        cout << "Dengan pujian/Cumlaude" << "\n\n";
    }
    else(3.0<=ipk<3.5)
    {
        cout << "Sangat memuaskan/Very Good" << "\n\n";
    }
    else(2.75<=3.0)
    {
        cout << "Memuaskan/Good" << "\n\n";
    }


    return 0;
}
