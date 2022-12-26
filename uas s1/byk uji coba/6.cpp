// mengelola data penjualan ayam geprek di toko Anda, dengan menambahkan tabel dengan garis batas (border) untuk menampilkan data penjualan setiap hari, serta menambahkan menu untuk menghitung penjualan paling banyak, dan menambahkan pertanyaan kepada pengguna untuk lanjut melihat menu rekap data atau keluar, serta menggabungkan program menu yang komplit:
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const int HARI_DALAM_SEMINGGU = 5;
const int JUMLAH_MENU = 3;

int main()
{
    // Array 2D untuk menyimpan data penjualan ayam geprek setiap hari
    int penjualan[HARI_DALAM_SEMINGGU][JUMLAH_MENU] = {0};

    // Harga dari setiap menu ayam geprek
    int harga[JUMLAH_MENU] = {10000, 12000, 15000};

    // Nama dari setiap menu ayam geprek
    string menu[JUMLAH_MENU] = {"Saos Tiram", "Saos Cabai", "Saos Sambal Matah"};

    // Loop untuk meminta input penjualan setiap hari
    for (int hari = 0; hari < HARI_DALAM_SEMINGGU; hari++)
    {
        cout << "Masukkan data penjualan hari ke-" << hari + 1 << ":" << endl;

        // Loop untuk meminta input penjualan setiap menu
        for (int i = 0; i < JUMLAH_MENU; i++)
        {
            cout << "Jumlah penjualan " << menu[i] << ": ";
            cin >> penjualan[hari][i];
        }
    }

    // Menu utama
    while (true)
    {
        cout << endl
             << "Menu utama:" << endl;
        cout << "1. Tambah data penjualan" << endl;
        cout << "2. Lihat menu rekap data" << endl;
        cout << "3. Keluar" << endl;
        cout << "Masukkan pilihan Anda (1-3): ";

        int pilihan;
        cin >> pilihan;

        if (pilihan == 1)
        {
            // Tambah data penjualan
            cout << "Masukkan data penjualan hari ini:" << endl;
            for (int i = 0; i < JUMLAH_MENU; i++)
            {
                cout << "Jumlah penjualan " << menu[i] << ": ";
                int jumlah;
                cin >> jumlah;
                penjualan[HARI_DALAM_SEMINGGU - 1][i] += jumlah;
            }
        }
        else if (pilihan == 2)
        {
            // Lihat menu rekap data
        menu_rekap:
            cout << endl
                 << "Menu rekap data:" << endl;
            cout << "1. Data penjualan setiap hari" << endl;
            cout << "2. Data penjualan setiap menu" << endl;
            cout << "3. Data harga setiap menu" << endl;
            cout << "4. Menu dengan penjualan paling banyak" << endl;
            cout << "Masukkan pilihan Anda (1-4): ";

            int pilihan_rekap;
            cin >> pilihan_rekap;

            if (pilihan_rekap == 1)
            {
                // Data penjualan setiap hari
                cout << endl
                     << "Data penjualan setiap hari:" << endl;

                // Tampilkan judul tabel
                cout << setw(10) << "Hari" << setw(10) << "Total" << setw(10) << "Saos Tiram" << setw(10) << "Saos Cabai" << setw(10) << "Saos Sambal Matah" << endl;

                // Tampilkan data penjualan setiap hari
                for (int hari = 0; hari < HARI_DALAM_SEMINGGU; hari++)
                {
                    cout << setw(10) << hari + 1 << setw(10);

                    int total = 0;
                    for (int i = 0; i < JUMLAH_MENU; i++)
                    {
                        cout << setw(10) << penjualan[hari][i];
                        total += penjualan[hari][i];
                    }
                    cout << endl;
                }
            }
            else if (pilihan_rekap == 2)
            {
                // Data penjualan setiap menu
                cout << endl
                     << "Data penjualan setiap menu:" << endl;

                // Tampilkan judul tabel
                cout << setw(10) << "Menu" << setw(10) << "Total" << endl;

                // Tampilkan data penjualan setiap menu
                for (int i = 0; i < JUMLAH_MENU; i++)
                {
                    int total = 0;
                    for (int hari = 0; hari < HARI_DALAM_SEMINGGU; hari++)
                    {
                        total += penjualan[hari][i];
                    }
                    cout << setw(10) << total << endl;
                }
            }
            else if (pilihan_rekap == 3)
            {
                // Data harga setiap menu
                cout << endl
                     << "Data harga setiap menu:" << endl;

                // Tampilkan judul tabel
                cout << setw(10) << "Menu" << setw(10) << "Harga" << endl;

                // Tampilkan data harga setiap menu
                for (int i = 0; i < JUMLAH_MENU; i++)
                {
                    cout << setw(10) << menu[i] << setw(10) << harga[i] << endl;
                }
            }
            else if (pilihan_rekap == 4)
            {
                // Menu dengan penjualan paling banyak
                cout << endl
                     << "Menu dengan penjualan paling banyak:" << endl;

                int menu_paling_banyak = 0;
                int jumlah_paling_banyak = 0;
                for (int i = 0; i < JUMLAH_MENU; i++)
                {
                    int total = 0;
                    for (int hari = 0; hari < HARI_DALAM_SEMINGGU; hari++)
                    {
                        total += penjualan[hari][i];
                    }
                    if (total > jumlah_paling_banyak)
                    {
                        menu_paling_banyak = i;
                        jumlah_paling_banyak = total;
                    }
                }
                cout << menu[menu_paling_banyak] << " dengan jumlah penjualan " << jumlah_paling_banyak << endl;
            }
            else
            {
                // Pilihan tidak valid
                cout << endl
                     << "Pilihan tidak valid" << endl;
            }

            cout << endl
                 << "Apakah Anda ingin melihat menu rekap data lainnya? (y/n) ";
            char lanjut;
            cin >> lanjut;

            if (lanjut == 'y')
            {
                // Kembali ke menu rekap data
                goto menu_rekap;
            }
        }
        else if (pilihan == 3)
        {
            // Keluar dari program
            break;
        }
        else
        {
            // Pilihan tidak valid
            cout << endl
                 << "Pilihan tidak valid" << endl;
        }
    }

    return 0;
}