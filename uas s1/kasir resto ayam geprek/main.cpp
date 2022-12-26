#include <iostream>
using namespace std;
/*
ISNA NUR AMALIA
26 DES 2022
UAS - S1
*/

const int JUMLAH_HARI = 7; // jumlah hari dalam seminggu
const int JUMLAH_OUTLET = 3; // jumlah outlet

int main() {
//-------------------------JUDUL: PROGRAM MENGELOLA DATA PENJUALAN OUTLET AYAM GEPREK--------------------------
    cout << "PROGRAM REKAP DATA PENJUALAN OUTLET AYAM GEPREK";


//--------------------------------------------------ALOGRITMA--------------------------------------------------
    // array 2D untuk menyimpan jumlah penjualan setiap hari di setiap outlet
    int penjualan[JUMLAH_OUTLET][JUMLAH_HARI];

    // output instruksi kepada pengguna
    cout << "Masukkan jumlah penjualan ayam geprek di setiap outlet setiap hari" << endl;

    // Mengisi array penjualan dengan input dari pengguna
    for (int i = 0; i < JUMLAH_OUTLET; i++) {
        cout << "Outlet ke-" << i + 1 << ":" << endl;
        for (int j = 0; j < JUMLAH_HARI; j++) {
            cout << "Hari ke-" << j + 1 << ": ";
            cin >> penjualan[i][j];
        }
    }

    // output rekap data penjualan ayam geprek di setiap outlet setiap hari
    cout << "Rekap data penjualan ayam geprek:" << endl;
    for (int i = 0; i < JUMLAH_OUTLET; i++) {
        cout << "Outlet ke-" << i + 1 << ":" << endl;
            for (int j = 0; j < JUMLAH_HARI; j++) {
                cout << "Hari ke-" << j + 1 << ": " << penjualan[i][j] << " porsi" << endl;
        }
    }

    // menghitung jumlah penjualan ayam geprek di setiap outlet
    int jumlahPenjualan[JUMLAH_OUTLET];
    for (int i = 0; i < JUMLAH_OUTLET; i++) {
        jumlahPenjualan[i] = 0;
        for (int j = 0; j < JUMLAH_HARI; j++) {
                jumlahPenjualan[i] += penjualan[i][j];
        }
    }

    // output jumlah penjualan ayam geprek di setiap outlet
    cout << "Jumlah penjualan ayam geprek di setiap outlet:" << endl;
    for (int i = 0; i < JUMLAH_OUTLET; i++) {
        cout << "Outlet ke-" << i + 1 << ": " << jumlahPenjualan[i] << " porsi" << endl;
    }

    // menghitung jumlah penjualan ayam geprek di semua outlet
    int totalPenjualan = 0;
    for (int i = 0; i < JUMLAH_OUTLET; i++) {
        totalPenjualan += jumlahPenjualan[i];
    }

    // output jumlah penjualan ayam geprek di semua outlet
    cout << "Jumlah penjualan ayam geprek di semua outlet: " << totalPenjualan << " porsi" << endl;

    // mencari outlet dengan penjualan terbanyak
    int outletTerbanyak = 0;
    for (int i = 1; i < JUMLAH_OUTLET; i++) {
        if (jumlahPenjualan[i] > jumlahPenjualan[outletTerbanyak]) {
            outletTerbanyak = i;
        }
    }

    // output outlet dengan penjualan terbanyak
    cout << "Outlet dengan penjualan terbanyak: Outlet ke-" << outletTerbanyak + 1 << endl;

//--------------------------------------------------END ALOGRITMA--------------------------------------------------

    return 0;
    }
