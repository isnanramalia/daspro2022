#include <iostream>
/*ISNA NUR AMALIA
A11.2022.14330 klp: 4108
Senin, 14 november 2022
Dibuat di D3G
*/

using namespace std;

int main()
{
    int n, sum, i;
    sum = 0;
    i = 1;

    cin >> n;
    while(i<=n){
        cout << i << endl;
        sum = sum + i;
        i++;
    }
    cout << "Hasil penjumlahan dari 1 sampai " << n << " adalah " << sum;

    /*
    int n, sum, i, sum_genap;
    sum = 0;
    sum_genap=0;
    i = 1;

    cout << "input angka: ";
    cin >> n;
    while(i<n){
        cout << i << endl;
        sum = sum + i;
        i++; //tambah 1 stlah diproses
        if(i%2==0)
        {
            cout << i << endl;
            sum_genap=sum_genap+i;
            i++;
        }
    }
    cout << "Hasil penjumlahan dari 1 sampai " << n << " adalah " << sum << endl;
    cout << "Hasil penjumlahan nilai genap adalah " << sum_genap;
    */

    return 0;
}
