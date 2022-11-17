#include <iostream>
/*ISNA NUR AMALIA
A11.2022.14330 klp: 4108
Rabu, 16 november 2022
*/
using namespace std;

int main()
{
    int x, a, i;

    cin >> a;
    string hasil= " prima ";
    for(int x=2; x<a; x++)
    {
        if(a%x==0)
        {
            hasil=" bukan prima";
            break;
        }
        else{
            break;
        }
    }
    cout << a << " merupakan bilangan" << hasil;
    return 0;
}
