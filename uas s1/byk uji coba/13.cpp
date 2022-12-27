// final uas versi lebih rapi --> berdasar identifikasi dr ai
#include <iostream>
#include <string>
#include <limits>

using namespace std;

const int DAYS_COUNT = 7;  // menggunakan konstanta untuk jumlah hari
const int TYPES_COUNT = 2; // menggunakan konstanta untuk jumlah tipe ayam geprek

int main()
{
    // mendefinisikan array 2D untuk menyimpan data penjualan ayam geprek selama 7 hari
    int sales[DAYS_COUNT][TYPES_COUNT];

    // input data penjualan ayam geprek selama 7 hari dari user
    for (int i = 0; i < DAYS_COUNT; i++)
    {
        cout << "\nMasukkan data penjualan hari ke-" << i + 1 << ":" << endl;
        cout << " Ayam geprek tipe A: ";
        while (!(cin >> sales[i][0])) // validasi input harus angka
        {
            cout << "Input harus angka, silakan masukkan ulang: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cout << " Ayam geprek tipe B: ";
        while (!(cin >> sales[i][1])) // validasi input harus angka
        {
            cout << "Input harus angka, silakan masukkan ulang: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    // output menu pengolahan data penjualan
    int menu;
    bool keluar = false;
    while (!keluar)
    {
        cout << "\n----PROGRAM PENGOLAHAN DATA PENJUALAN AYAM GEPREK SELAMA 7 HARI----" << endl;
        cout << "\n----Pilih menu pengolahan data penjualan:" << endl;
        cout << "1. Tampilkan data penjualan setiap hari" << endl;
        cout << "2. Cari hari dengan penjualan tertinggi" << endl;
        cout << "3. Hitung total penjualan selama 7 hari" << endl;
        cout << "4. Keluar dari program" << endl;
        cout << "Masukkan pilihan Anda: ";
        while (!(cin >> menu)) // validasi input harus angka
        {
            cout << "Input harus angka, silakan masukkan ulang: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        // if else untuk memproses pilihan menu yang dipilih user
        if (menu == 1)
        {
            // menampilkan data penjualan setiap hari dalam tabel
            cout << "\n| No. | Tipe A | Tipe B | Total |" << endl;
            cout << "|-----|--------|--------|-------|" << endl;
            for (int i = 0; i < DAYS_COUNT; i++)
            {
                cout << "| " << i + 1 << " | " << sales[i][0] << " | " << sales[i][1] << " | " << sales[i][0] + sales[i][1] << " |" << endl;
            }
        }
        else if (menu == 2)
        {
            // mencari hari dengan penjualan tertinggi
            int highest_sales = 0;
            int highest_sales_day = 0;
            for (int i = 0; i < DAYS_COUNT; i++)
            {
                if (sales[i][0] + sales[i][1] > highest_sales)
                {
                    highest_sales = sales[i][0] + sales[i][1];
                    highest_sales_day = i + 1;
                }
            }
            // menampilkan data penjualan tertinggi dalam tabel
            cout << "\nHari dengan penjualan tertinggi:" << endl;
            cout << "| No. | Tipe A | Tipe B | Total |" << endl;
            cout << "|-----|--------|--------|-------|" << endl;
            cout << "| " << highest_sales_day << " | " << sales[highest_sales_day - 1][0] << " | " << sales[highest_sales_day - 1][1] << " | " << highest_sales << " |" << endl;
        }
        else if (menu == 3)
        {
            // menghitung total penjualan selama 7 hari
            int total_sales = 0;
            for (int i = 0; i < DAYS_COUNT; i++)
            {
                total_sales += sales[i][0] + sales[i][1];
            }
            cout << "\nTotal penjualan selama 7 hari: " << total_sales << endl;
        }
        else if (menu == 4)
        {
            keluar = true; // keluar dari loop while
        }
        else
        {
            cout << "\nPilihan tidak valid, silakan masukkan pilihan yang tersedia." << endl;
        }
    }
    return 0;
}
