/*
ISNA NUR AMALIA
A11.2022.14330
UAS DASPRO - KAMIS, 29 Des 2022
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // mendefinisikan array 2D untuk menyimpan data penjualan ayam geprek selama 7 hari
    int sales[7][2];

    // input data penjualan ayam geprek selama 7 hari dari user
    for (int i = 0; i < 7; i++)
    {
        cout << "\nmasukkan data penjualan hari ke-" << i + 1 << ":" << endl; // saran: isi 3 angka agar tabel rapi wkwk
        cout << " ayam geprek tipe A: ";
        cin >> sales[i][0];
        cout << " ayam geprek tipe B: ";
        cin >> sales[i][1];
    }

    // output menu pengolahan data penjualan
    int menu;
    bool keluar = false;
    while (!keluar)
    {
        cout << "\n----PROGRAM PENGOLAHAN DATA PENJUALAN AYAM GEPREK SELAMA 7 HARI----" << endl;
        cout << "\n----pilih menu pengolahan data penjualan:" << endl;
        cout << "1. tampilkan data penjualan setiap hari" << endl;
        cout << "2. cari hari dengan penjualan tertinggi" << endl;
        cout << "3. hitung total penjualan selama 7 hari" << endl;
        cout << "4. keluar dari program" << endl;
        cout << "masukkan pilihan anda: ";
        cin >> menu;

        // if else untuk memproses pilihan menu yang dipilih user
        if (menu == 1)
        {
            // nested loop untuk menampilkan data penjualan setiap hari
            cout << "\n| No. | Tipe A | Tipe B | Total |" << endl;
            cout << "|-----|--------|--------|-------|" << endl;
            for (int i = 0; i < 7; i++)
            {
                cout << "| " << i + 1 << "   | " << sales[i][0] << "    | " << sales[i][1] << "    | " << sales[i][0] + sales[i][1] << "   |" << endl;
            }
        }
        else if (menu == 2)
        {
            // mencari hari dengan penjualan tertinggi
            int highest_sales = 0;
            int highest_sales_day = 0;
            for (int i = 0; i < 7; i++)
            {
                if (sales[i][0] + sales[i][1] > highest_sales)
                {
                    highest_sales = sales[i][0] + sales[i][1];
                    highest_sales_day = i + 1;
                }
            }
            cout << "\nHari dengan penjualan tertinggi:" << endl;
            cout << "| No. | Tipe A | Tipe B | Total |" << endl;
            cout << "|-----|--------|--------|-------|" << endl;
            cout << "| " << highest_sales_day << " | " << sales[highest_sales_day - 1][0] << " | " << sales[highest_sales_day - 1][1] << " | " << highest_sales << " |" << endl;
        }
        else if (menu == 3)
        {
            // menghitung total penjualan selama 7 hari
            int total_sales = 0;
            for (int i = 0; i < 7; i++)
            {
                total_sales += sales[i][0] + sales[i][1];
            }
            cout << "\nTotal penjualan selama 7 hari:" << endl;
            cout << "| No. | Tipe A | Tipe B | Total|" << endl;
            cout << "|-----|--------|--------|-------|" << endl;
            cout << "| \t| \t| \t| " << total_sales << " |" << endl;
        }
        else if (menu == 4)
        {
            // keluar dari program
            keluar = true;
        }
        else
        {
            cout << "pilihan menu tidak valid." << endl;
        }
    }

    return 0;
}