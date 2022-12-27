// 7 hari + border
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Mendefinisikan array 2D untuk menyimpan data penjualan ayam geprek selama 7 hari
    int sales[7][2];

    // Mengisi data penjualan ayam geprek selama 7 hari melalui input dari user
    for (int i = 0; i < 7; i++)
    {
        cout << "Masukkan data penjualan hari ke-" << i + 1 << ":" << endl;
        cout << " Ayam geprek tipe A: ";
        cin >> sales[i][0];
        cout << " Ayam geprek tipe B: ";
        cin >> sales[i][1];
    }

    // Menampilkan menu pengolahan data penjualan
    int menu;
    cout << "Pilih menu pengolahan data penjualan:" << endl;
    cout << "1. Tampilkan data penjualan setiap hari" << endl;
    cout << "2. Cari hari dengan penjualan tertinggi" << endl;
    cout << "3. Hitung total penjualan selama 7 hari" << endl;
    cout << "Masukkan pilihan Anda: ";
    cin >> menu;

    // Menggunakan if else untuk memproses pilihan menu yang dipilih user
    if (menu == 1)
    {
        // Menggunakan nested loop untuk menampilkan data penjualan setiap hari
        cout << "| No. | Tipe A | Tipe B | Total |" << endl;
        cout << "|-----|--------|--------|-------|" << endl;
        for (int i = 0; i < 7; i++)
        {
            cout << "| " << i + 1 << " | " << sales[i][0] << " | " << sales[i][1] << " | " << sales[i][0] + sales[i][1] << " |" << endl;
        }
    }
    else if (menu == 2)
    {
        // Mencari hari dengan penjualan tertinggi
        int highest_sales = 0;
        int highest_sales_day = 0;
        for (int i = 0; i < 7; i++)
        {
            int total_sales = sales[i][0] + sales[i][1];
            if (total_sales > highest_sales)
            {
                highest_sales = total_sales;
                highest_sales_day = i + 1;
            }
        }
        cout << "Hari dengan penjualan tertinggi:" << endl;
        cout << "| No. | Tipe A | Tipe B | Total |" << endl;
        cout << "|-----|--------|--------|-------|" << endl;
        cout << "| " << highest_sales_day << " | " << sales[highest_sales_day - 1][0] << " | " << sales[highest_sales_day - 1][1] << " | " << highest_sales << " |" << endl;
    }
    else if (menu == 3)
    {
        // Menghitung total penjualan selama 7 hari
        int total_sales = 0;
        for (int i = 0; i < 7; i++)
        {
            total_sales += sales[i][0] + sales[i][1];
        }
        cout << "Total penjualan selama 7 hari:" << endl;
        cout << "| No. | Tipe A | Tipe B | Total |" << endl;
        cout << "|-----|--------|--------|-------|" << endl;
        cout << "| | | | " << total_sales << " |" << endl;
    }
    else
    {
        cout << "Pilihan menu tidak valid." << endl;
    }

    return 0;
}