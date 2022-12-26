// rekap data penjualan ayam geprek menggunakan nested loop, array 2D, dan if-else, serta ditambahkan pilihan menu rekap data dan harga ayam geprek, dengan asumsi bahwa toko ayam geprek tutup 1 hari pada hari jumat:
#include <iostream>
using namespace std;

const int JUMLAH_HARI = 7;   // jumlah hari dalam seminggu
const int JUMLAH_OUTLET = 3; // jumlah outlet

int main()
{
    // Menyiapkan array 2D untuk menyimpan jumlah penjualan setiap hari di setiap outlet
    int penjualan[JUMLAH_OUTLET][JUMLAH_HARI];

    // Menyiapkan array untuk menyimpan harga ayam geprek di setiap outlet
    int harga[JUMLAH_OUTLET];

    // Menampilkan instruksi kepada pengguna
    cout << "Masukkan jumlah penjualan ayam geprek di setiap outlet setiap hari" << endl;
    cout << "Toko ayam geprek tutup 1 hari pada hari Jumat" << endl;
    cout << "Masukkan juga harga ayam geprek di setiap outlet" << endl;

    // Mengisi array penjualan dan harga dengan input dari pengguna
    for (int i = 0; i < JUMLAH_OUTLET; i++)
    {
        cout << "Outlet ke-" << i + 1 << ":" << endl;
        cout << "Harga ayam geprek: Rp ";
        cin >> harga[i];
        for (int j = 0; j < JUMLAH_HARI; j++)
        {
            if (j == 4)
            {
                // Menyiapkan penjualan di hari jumat sebagai 0 karena toko tutup
                penjualan[i][j] = 0;
            }
            else
            {
                cout << "Jumlah penjualan hari ke-" << j + 1 << ": ";
                cin >> penjualan[i][j];
            }
        }
        // Menampilkan menu rekap data penjualan ayam geprek
        cout << endl;
        cout << "Menu rekap data penjualan ayam geprek:" << endl;
        cout << "1. Rekap data penjualan setiap hari di setiap outlet" << endl;
        cout << "2. Jumlah penjualan setiap hari di semua outlet" << endl;
        cout << "3. Jumlah penjualan di setiap outlet" << endl;
        cout << "4. Jumlah penjualan di semua outlet" << endl;
        cout << "5. Outlet dengan penjualan terbanyak" << endl;
        cout << "6. Outlet dengan pendapatan terbesar" << endl;
        cout << "7. Keluar" << endl;
        cout << endl;
        cout << "Pilihan Anda: ";

        // Meminta pilihan rekap data dari pengguna
        int pilihan;
        cin >> pilihan;

        if (pilihan == 1)
        {
            // Menampilkan rekap data penjualan ayam geprek setiap hari di setiap outlet
            cout << "Rekap data penjualan ayam geprek setiap hari di setiap outlet:" << endl;
            for (int i = 0; i < JUMLAH_OUTLET; i++)
            {
                cout << "Outlet ke-" << i + 1 << ":" << endl;
                for (int j = 0; j < JUMLAH_HARI; j++)
                {
                    cout << "Hari ke-" << j + 1 << ": " << penjualan[i][j] << " porsi" << endl;
                }
            }
        }
        else if (pilihan == 2)
        {
            // Menampilkan jumlah penjualan ayam geprek di semua outlet setiap hari
            cout << "Jumlah penjualan ayam geprek di semua outlet setiap hari:" << endl;
            for (int j = 0; j < JUMLAH_HARI; j++)
            {
                int jumlahPenjualanHari = 0;
                for (int i = 0; i < JUMLAH_OUTLET; i++)
                {
                    jumlahPenjualanHari += penjualan[i][j];
                }
                cout << "Hari ke-" << j + 1 << ": " << jumlahPenjualanHari << " porsi" << endl;
            }
        }
        else if (pilihan == 3)
        {
            // Menghitung jumlah penjualan ayam geprek di setiap outlet
            int jumlahPenjualan[JUMLAH_OUTLET];
            for (int i = 0; i < JUMLAH_OUTLET; i++)
            {
                jumlahPenjualan[i] = 0;
                for (int j = 0; j < JUMLAH_HARI; j++)
                {
                    jumlahPenjualan[i] += penjualan[i][j];
                }
            }
        }
        else if (pilihan == 4)
        {
            // Menghitung jumlah penjualan ayam geprek di semua outlet
            int totalPenjualan = 0;
            for (int i = 0; i < JUMLAH_OUTLET; i++)
            {
                for (int j = 0; j < JUMLAH_HARI; j++)
                {
                    totalPenjualan += penjualan[i][j];
                }
            }
        }
        else if (pilihan == 5)
        {
            // Menghitung jumlah penjualan ayam geprek di setiap outlet
            int jumlahPenjualan[JUMLAH_OUTLET];
            for (int i = 0; i < JUMLAH_OUTLET; i++)
            {
                jumlahPenjualan[i] = 0;
                for (int j = 0; j < JUMLAH_HARI; j++)
                {
                    jumlahPenjualan[i] += penjualan[i][j];
                }
            }
        }
        else if (pilihan == 6)
        {
            // Menghitung jumlah penjualan ayam geprek di setiap outlet
            int jumlahPenjualan[JUMLAH_OUTLET];
            for (int i = 0; i < JUMLAH_OUTLET; i++)
            {
                jumlahPenjualan[i] = 0;
                for (int j = 0; j < JUMLAH_HARI; j++)
                {
                    jumlahPenjualan[i] += penjualan[i][j];
                }
            }
        }
        else if (pilihan == 7)
        {
            // Keluar dari program
            cout << "Terima kasih telah menggunakan program ini." << endl;
        }
        else
        {
            // Menampilkan pesan error jika pilihan tidak valid
            cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }

        return 0;
    }