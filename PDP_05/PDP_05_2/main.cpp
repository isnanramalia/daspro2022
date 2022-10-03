#include <iostream>

using namespace std;

int main()
{
    int tahun;

    cin >> tahun;
    if(tahun>=2020)
    {
        cout << "Motor sudah 2020\n";
    }
    else
    {
        cout << ((2020-tahun)*2000000) << endl;
    }
    return 0;
}
