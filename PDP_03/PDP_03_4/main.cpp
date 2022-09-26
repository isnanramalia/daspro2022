#include <iostream>

using namespace std;

int main()
{
    //Kasus 4 - Operasi Relasional
    int n1, n2, n3, n4, n5, n6, n7;

    cout << "KASUS 4 - OPERASI RASIONAL" << "\n\n\n";
    cout << "nomor 1: " << "\n" << "Cek interval 3<n1<10. Masukkan n1= ";
    cin >> n1;
    cout << "Hasilnya: " << "\n" << "interval 3<n1<10 = 3<" << n1 << "<10 = " << ((n1>3) && (n1<10)) << "\n\n\n";

    cout << "nomor 2: " << "\n" << "Cek interval 5<=n2<=6. Masukkan n2= ";
    cin >> n2;
    cout << "Hasilnya: " << "\n" << "interval 5<=n2<=6 = 5<=" << n2 << "<=6 = " << ((n2>=5) && (n2<=6)) << "\n\n\n";

    cout << "nomor 3: " << "\n" << "Cek interval 5<=n3<25. Masukkan n3= ";
    cin >> n3;
    cout << "Hasilnya: " << "\n" << "interval 5<=n3<25 = 5<=" << n3 << "<25 = " << ((n3 >= 5) && (n3 < 25)) << "\n\n\n";

    cout << "nomor 4: " << "\n" << "Cek interval 3<n4<=15 atau 22<n4<32. Masukkan nilai n4= ";
    cin >> n4;
    cout << "Hasilnya: " << "\n" << "interval 3<n4<=15 atau 22<n4<32 = 3<" << n4 << "<=15 atau 22<" << n4 << "<32 = " << ((n4 > 3) && (n4 <= 15) || (22 < n4) && (n4 < 32)) << "\n\n\n";

    cout << "nomor 5: " << "\n" << "Cek interval n5<5 atau n5>17. Masukan n5= ";
	cin >> n5;
	cout << "Hasilnya: " << "\n" << "interval n5<5 atau n5>17 = " << n5 << "<5 atau " << n5 << ">17 = " << (n5 < 5 || n5 > 17) << "\n\n\n";

	cout << "nomor 6: " << "\n" << "Cek n6<8 atau interval (9, 15] atau interval [21, 33). Masukan n6= ";
	cin >> n6;
	cout << "Hasilnya: " << "\n" << "interval " << n6 << "<8 atau interval (9, 15] atau interval [21, 33) = " << (n6 > 8 || (n6 > 9) && (n6 <= 15) || (n6 <= 21) && (n6 > 33)) << "\n\n\n";

	cout << "nomor 7: " << "\n" << "Cek interval n7<8 atau interval (9, 15] atau interval [21, 30) atau n7>34. Masukan n7= ";
	cin >> n7;
	cout << "Hasilnya: " << "\n" << "interval (9, 15] atau interval [21, 30) atau " << n7 << ">34 = " << (n7 < 8 || (n7 > 9) && (n7 <= 15) || (n7 >= 21) && (n7 < 30) || n7 > 34) << "\n\n\n";
    return 0;
}
