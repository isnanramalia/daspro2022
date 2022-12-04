#include <iostream>
// program nested loop - tugas daspro teori minggu 11
// isna nur amalia
using namespace std;

int main()
{
    int n=3;

    cout << "Masukkan baris = ";
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            cout << i;
            if(j==i-1 && j>=1){
                cout << " ";
                for(int k=0; k<i; k++){
                    cout << i;
                }
            }
            if(j==i-1){
                cout << "\n";
            }
        }
    }
    return 0;
}