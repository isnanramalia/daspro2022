#include <iostream>
/*ISNA NUR AMALIA
A11.2022.14330 klp: 4108
Senin, 14 november 2022
Dibuat di D3G
*/

using namespace std;

int main()
{
    float sum, n, ratarata;
    int i, a;

    cout << "batas: ";
    sum = 0;
    i = 0;

    cin >> a;
    do
    {
        cout << "input n: ";
        cin >> n;
        sum = sum + n;
        i++;
    }
    while(i<a);

    ratarata=sum/i;
    cout << "rata-ratanya adalah " << ratarata;


    return 0;
}
