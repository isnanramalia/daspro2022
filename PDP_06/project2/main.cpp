#include <iostream>
/*ISNA NUR AMALIA
Senin, 10 Oktober 2022 - DG3
*/
using namespace std;

int main()
{
    float s;

    cin >> s;

    if(s<0){
        cout << "beku" << endl;
    }
    else if(s==0){
        cout << "beku-cair" << endl;
    }
    else if(0<s&&s<100){
        cout << "cair" << endl;
    }
    else if(s>100){
        cout << "uap" << endl;
    }
    else{
        cout << "cair-uap" << endl;
    }
    return 0;
}
