#include <iostream>
using namespace std;
/*
ISNA NUR AMALIA
26 DES 2022
UAS - S1
*/

const int JUMLAH_HARI = 7; //jumlah hari dlm seminggu
const int JUMLAH_OUTLET = 3; //jumlah outlet
int main()
{
//-------------------------JUDUL: PROGRAM MENGELOLA DATA PENJUALAN OUTLET AYAM GEPREK DGN MENU--------------------------

    //menyiapkan array 2D utk menyimpan jumlah penjualan setiap hari di setiap outlet
    int penjualan[JUMLAH_OUTLET][JUMLAH_HARI];

    //output instruksi ke user
    cout << "input jumlah penjualan ayam geprek di setiap outlet setiap hari" << endl;

    //isi array penjualan dgn input dari user
    for(int i=0; i<JUMLAH_OUTLET; i++){
        cout << "outlet ke-" << i+1 << ":" << endl;
        for(int j=0; j<JUMLAH_HARI; j++){
            cout << "hari ke-" << j+1 << ": ";
            cin >> penjualan[i][j];
        }
    }

    //output menu rekap data penjualan ayam geprek
    cout << endl;
    cout << "MENU REKAP DATA PENJUALAN AYAM GEPREK" << endl;
    cout << "1. Rekap data penjualan setiap hari di setiap outlet" << endl;
    cout << "2. Jumlah penjualan setiap hari di semua outlet" << endl;
    cout << "3. Jumlah penjualan di setiap outlet" << endl;
    cout << "4. Jumlah penjualan di semua outlet" << endl;
    cout << "5. Outlet dengan penjualan terbanyak" << endl;
    cout << "6. Keluar" << endl;
    cout << endl;
    cout << "pilihan anda: ";

    //meminta pilihan rekap data dari user
    int pilihan;
    cin >> pilihan;

    //menampilkan rekap data sesuai dengan pilihan pengguna
    if(pilihan == 1){
        //menampilkan rekap data penjualan ayam geprek di setiap outlet setiap hari
        cout << "rekap data penjualan ayam geprek: " << endl;
        for(int i=0; i<JUMLAH_OUTLET; i++){
            cout << "outlet ke-" << i+1 << ":" << endl;
            for(int j=0; j<JUMLAH_HARI; j++){
                cout << "hari ke-" << j+1 << ": " << penjualan[i][j] << " porsi" << endl;
            }
        }
    }else if(pilihan == 2){
        //menampilkan jumlah penjualan ayam geprek di semua outlet setiap hari
        cout << "jumlan penjualan ayam geprek di semua outlet setiap hari:" << endl;
        for(int j=0; j<JUMLAH_HARI; j++){
            int jumlahPenjualanHari = 0;
            for(int i=0; i<JUMLAH_OUTLET; i++){
                jumlahPenjualanHari += penjualan[i][j];
            }
            cout << "hari ke-" << j+1 << ": " << jumlahPenjualanHari << " porsi" << endl;
        }
    }else if(pilihan == 3){
        //menghitung jumlah penjualan ayam geprek di setiap outlet
        int jumlahPenjualan[JUMLAH_OUTLET];
        for(int i=0; i<JUMLAH_OUTLET; i++){
            jumlahPenjualan[i]=0;
            for(int j=0; j<JUMLAH_HARI; j++){
                jumlahPenjualan[i] += penjualan[i][j];
            }
        }
    }else if(pilihan == 4){
        //menghitung jumlah pnejualan ayam geprek di semua outlet
        int totalPenjualan = 0;
        for(int i = 0; i<JUMLAH_OUTLET; i++){
            for(int j=0; j<JUMLAH_HARI; j++){
                totalPenjualan += penjualan[i][j];
            }
        }
    }else if(pilihan == 5){
        //menghitung jumlah penjualan ayam geprek di setiap outlet
        int jumlahPenjualan[JUMLAH_OUTLET];
        for(int i = 0; i<JUMLAH_OUTLET; i++){
            jumlahPenjualan[i]=0;
            for(int j=0; j<JUMLAH_HARI; j++){
                jumlahPenjualan[i] += penjualan[i][j];
            }
        }
    }else if(pilihan == 6){
        cout << "terima kasih telah menggunakan program ini." << endl;
    }else{
        //menampilkan pesan error jika pilihan tidak valid
        cout << "pilihan tidak valid. silahkan coba lagi." << endl;
    }
    return 0;
}
