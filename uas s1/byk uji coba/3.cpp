// ekap data penjualan ayam geprek menggunakan nested loop, array 2D, dan if-else, serta ditambahkan pilihan menu rekap data dan harga ayam geprek di setiap outlet yang memiliki beberapa jenis geprek:
#include <iostream>
using namespace std;

const int JUMLAH_HARI = 7;         // jumlah hari dalam seminggu
const int JUMLAH_OUTLET = 3;       // jumlah outlet
const int JUMLAH_JENIS_GEPREK = 3; // jumlah jenis geprek di setiap outlet

int main()
{
    // Menyiapkan array 2D untuk menyimpan jumlah penjualan setiap hari di setiap outlet
    int penjualan[JUMLAH_OUTLET][JUMLAH_HARI][JUMLAH_JENIS_GEPREK];

    // Menyiapkan array 3D untuk menyimpan harga ayam geprek di setiap outlet
    int harga[JUMLAH_OUTLET][JUMLAH_JENIS_GEPREK];

    // Menampilkan instruksi kepada pengguna
    cout << "Masukkan jumlah penjualan ayam geprek di setiap outlet setiap hari" << endl;
    cout << "Masukkan juga harga ayam geprek di setiap outlet" << endl;

    // Mengisi array penjualan dan harga dengan input dari pengguna
    for (int i = 0; i < JUMLAH_OUTLET; i++)
    {
        cout << "Outlet ke-" << i + 1 << ":" << endl;
        for (int j = 0; j < JUMLAH_JENIS_GEPREK; j++)
        {
            cout << "Harga ayam geprek jenis ke-" << j + 1 << ": Rp ";
            cin >> harga[i][j];
        }
        for (int j = 0; j < JUMLAH_HARI; j++)
        {
            for (int k = 0; k < JUMLAH_JENIS_GEPREK; k++)
            {
                cout << "Jumlah penjualan hari ke-" << j + 1 << " jenis ke-" << k + 1 << ": ";
                cin >> penjualan[i][j][k];
            }
        }
    }

    // Menampilkan menu rekap data penjualan ayam geprek
    cout << endl;
    cout << "Menu rekap data penjualan ayam geprek:" << endl;
    cout << "1. Rekap data penjualan setiap hari di setiap outlet" << endl;
    cout << "2. Jumlah penjualan setiap hari di semua outlet" << endl;
    cout << "3. Jumlah penjualan di setiap outlet" << endl;
    cout << "4. Jumlah penjualan di semua outlet" << endl;
    cout << "5. Outlet dengan penjualan terbanyak";
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
                cout << "Hari ke-" << j + 1 << ": ";
                for (int k = 0; k < JUMLAH_JENIS_GEPREK; k++)
                {
                    cout << penjualan[i][j][k] << " porsi jenis ke-" << k + 1 << ", ";
                }
                cout << endl;
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
                for (int k = 0; k < JUMLAH_JENIS_GEPREK; k++)
                {
                    jumlahPenjualanHari += penjualan[i][j][k];
                }
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
                for (int k = 0; k < JUMLAH_JENIS_GEPREK;)
                {
                    jumlahPenjualan[i] += penjualan[i][j][k];
                }
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
                for (int k = 0; k < JUMLAH_JENIS_GEPREK; k++)
                {
                    totalPenjualan += penjualan[i][j][k];
                }
            }
        }
        // Menampilkan jumlah penjualan ayam geprek di semua outlet
        cout << "Jumlah penjualan ayam geprek di semua outlet: " << totalPenjualan << " porsi" << endl;
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
                for (int k = 0; k < JUMLAH_JENIS_GEPREK; k++)
                {
                    jumlahPenjualan[i] += penjualan[i][j][k];
                }
            }
        }
        // Mencari outlet dengan penjualan terbanyak
        int outletTerbanyak = 0;
        for (int i = 1; i < JUMLAH_OUTLET; i++)
        {
            if (jumlahPenjualan[i] > jumlahPenjualan[outletTerbanyak])
            {
                outletTerbanyak = i;
            }
        }

        // Menampilkan outlet dengan penjualan terbanyak
        cout << "Outlet dengan penjualan terbanyak: Outlet ke-" << outletTerbanyak + 1 << endl;
        else if (pilihan == 6)
        {
            // Menghitung jumlah penjualan ayam geprek di setiap outlet
            int jumlahPenjualan[JUMLAH_OUTLET];
            for (int i = 0; i < JUMLAH_OUTLET; i++)
            {
                jumlahPenjualan[i] = 0;
                for (int j = 0; j < JUMLAH_HARI; j++)
                {
                    for (int k = 0; k < JUMLAH_JENIS_GEPREK; k++)
                    {
                        jumlahPenjualan[i] += penjualan[i][j][k];
                    }
                }
            }

            // Mencari outlet dengan pendapatan terbesar
            int outletTerbesar = 0;
            for (int i = 1; i < JUMLAH_OUTLET; i++)
            {
                int pendapatan = 0;
                for (int k = 0; k < JUMLAH_JENIS_GEPREK; k++)
                {
                    pendapatan += harga[i][k] * jumlahPenjualan[i];
                }
                if (pendapatan > jumlahPenjualan[outletTerbesar] * harga[outletTerbesar])
                {
                    outletTerbesar = i;
                }
            }

            // Menampilkan outlet dengan pendapatan terbesar
            cout << "Outlet dengan pendapatan terbesar: Outlet ke-" << outletTerbesar + 1
        }
        else if (pilihan == 7)
        {
            // Keluar dari program
            cout << "Terima kasih telah menggunakan program ini!" << endl;
        }
        else
        {
            // Menampilkan pesan error jika pilihan tidak valid
            cout << "Pilihan tidak valid. Silakan masukkan pilihan yang tersedia." << endl;
        }

        return 0;
    }
