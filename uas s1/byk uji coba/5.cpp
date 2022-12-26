// program rekap data ayam geprek ada tabelnya
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const int HARI_DALAM_SEMINGGU = 7;
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

    // Tampilkan menu rekap data
    cout << endl
         << "Menu rekap data:" << endl;
    cout << "1. Tampilkan data penjualan setiap hari" << endl;
    cout << "2. Tampilkan data penjualan setiap menu" << endl;
    cout << "3. Tampilkan data harga setiap menu" << endl;
    cout << "Masukkan pilihan Anda (1-3): ";

    int pilihan;
    cin >> pilihan;

    // Tampilkan data sesuai dengan pilihan yang dipilih
    if (pilihan == 1)
    {
        // Tampilkan data penjualan setiap hari
        cout << endl
             << "Data penjualan setiap hari:" << endl;
        cout << setw(10) << "|Hari ke-" << setw(10) << "|Menu" << setw(10) << "|Jumlah|" << endl;
        cout << "---------------------------------" << endl;
        for (int hari = 0; hari < HARI_DALAM_SEMINGGU; hari++)
        {
      for (int i = 0; i <        cout << "|" << setw(10) << hari + 1 << "|" << setw(10) << menu[i] << "|" << setw(10) << penjualan[hari][i] << "|" << endl;
        }
        cout << "---------------------------------" << endl;
    }
}
else if (pilihan == 2)
{
    // Tampilkan data penjualan setiap menu
    cout << endl
         << "Data penjualan setiap menu:" << endl;
    for (int i = 0; i < JUMLAH_MENU; i++)
    {
        cout << menu[i] << ": ";
        int total = 0;
        for (int hari = 0; hari < HARI_DALAM_SEMINGGU; hari++)
        {
      total += penjualan[hari][i];
        }
        cout << total << endl;
    }
}
else if (pilihan == 3)
{
    // Tampilkan data harga setiap menu
    // Tampilkan data harga setiap menu
    cout << endl
         << "Data harga setiap menu:" << endl;
    for (int i = 0; i < JUMLAH_MENU; i++)
    {
        cout << menu[i] << ": Rp" << harga[i] << endl;
    }
}
else
{
    // Pilihan tidak valid
    cout << endl
         << "Pilihan tidak valid" << endl;
}

return 0;
}
