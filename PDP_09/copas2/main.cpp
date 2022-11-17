#include <iostream>
using namespace std;
int main()
{
int i,jumlah, bil[10];
int nilai_genap=0;

for (i =1; i <= 5 ; i++)
{
cout <<"Masukkan bilangan ke"<<i<<" :\t";
cin >> bil[i];
}
cout<<endl;
cout<<"Deret bilangan genap"<<endl;

for (i =1; i <= 5 ; i++)
{
    if (bil[i] % 2 == 0)
    {
    cout<<bil[i]<<"\t";
    nilai_genap=nilai_genap+bil[i];
    }
}
    cout<<endl<<endl;
    cout<<"Deret bilangan ganjil"<<endl;

for (i =1; i <= 5 ; i++)
{
    if (bil[i] % 2 == 1)
    cout<<bil[i]<<"\t";
}

{cout<<endl<<endl;
    cout<<"Penjumlahan bilangan genap"<<endl;
    cout<<nilai_genap;

return 0;
}
}
