#include <iostream>
#include <string>
/*
ISNA NUR AMALIA
A11.2022.14330
UAS DASPRO - KAMIS, 29 Des 2022
*/

using namespace std;

int main()
{
    // array 2D utk menyimpan data penjualan ayam geprek selama 7 hari
    int sales[7][2];

    // array utk menyimpan nama hari dalam seminggu
    string hari[7] = {"senin", "selasa", "rabu", "kamis", "jumat", "sabtu", "minggu"};

    // input data penjualan ayam geprek selama 7 hari dari user
    for (int i = 0; i < 7; i++)
    {
        cout << "\nmasukkan data penjualan hari ke-" << i + 1 << ":" << endl;
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
        cout << "3. cari hari dengan penjualan terendah" << endl;
        cout << "4. hitung total penjualan selama 7 hari" << endl;
        cout << "5. tampilkan rata-rata penjualan selama 7 hari" << endl;
        cout << "6. tampilkan data penjualan pada hari tertentu" << endl;
        cout << "7. tampilkan total penjualan selama 7 hari dlm bentuk grafik" << endl;
        cout << "8. tampilkan rata-rata penjualan selama 7 hari dlm bentuk grafik" << endl;
        cout << "9. keluar dari program" << endl;
        cout << "masukkan pilihan anda: ";
        cin >> menu;

        // if else utk memproses pilihan menu yang dipilih user
        if (menu == 1)
        {
            // nested loop utk menampilkan data penjualan setiap hari
            cout << "\n| No. | Hari |Tipe A | Tipe B | Total |" << endl;
            cout << "|-----|------|--------|--------|-------|" << endl;
            for (int i = 0; i < 7; i++)
            {
                cout << "| " << i + 1 << " | " << hari[i] << " | " << sales[i][0] << " | " << sales[i][1] << " | " << sales[i][0] + sales[i][1] << " |" << endl;
            }
        }
        else if (menu == 2)
        {
            // mencari hari dengan penjualan tertinggi
            int highest_sales = sales[0][0] + sales[0][1];
            int highest_sales_day = 0;
            for (int i = 0; i < 7; i++)
            {
                if (sales[i][0] + sales[i][1] > highest_sales)
                {
                    highest_sales = sales[i][0] + sales[i][1];
                    highest_sales_day = i;
                }
            }
            cout << "\nHari dengan penjualan tertinggi: " << hari[highest_sales_day] << endl;
        }
        else if (menu == 3)
        {
            // mencari hari dengan penjualan terendah
            int lowest_sales = sales[0][0] + sales[0][1];
            int lowest_sales_day = 0;
            for (int i = 0; i < 7; i++)
            {
                if (sales[i][0] + sales[i][1] < lowest_sales)
                {
                    lowest_sales = sales[i][0] + sales[i][1];
                    lowest_sales_day = i;
                }
            }
            cout << "\nHari dengan penjualan terendah: " << hari[lowest_sales_day] << endl;
        }
        else if (menu == 4)
        {
            // menghitung total penjualan selama 7 hari
            int total_sales = 0;
            for (int i = 0; i < 7; i++)
            {
                total_sales += sales[i][0] + sales[i][1];
            }
            cout << "\nTotal penjualan selama 7 hari: " << total_sales << endl;
        }
        else if (menu == 5)
        {
            // menghitung rata-rata penjualan selama 7 hari
            int total_sales = 0;
            for (int i = 0; i < 7; i++)
            {
                total_sales += sales[i][0] + sales[i][1];
            }
            float average_sales = (float)total_sales / 7;
            cout << "\nRata-rata penjualan selama 7 hari: " << average_sales << endl;
        }
        else if (menu == 6)
        {
            // memilih hari dan menampilkan data penjualan hari tersebut
            int day;
            cout << "\nMasukkan nomor hari (1-7): ";
            cin >> day;
            cout << "\n| No. | Hari | Tipe A | Tipe B | Total |" << endl;
            cout << "|-----|-----|-----|-----|-----|" << endl;
            cout << "| " << day << " | " << hari[day - 1] << " | " << sales[day - 1][0] << " | " << sales[day - 1][1] << " | " << sales[day - 1][0] + sales[day - 1][1] << " |" << endl;
        }
        else if (menu == 7)
        { // menampilkan total penjualan selama 7 hari dalam bentuk grafik
            cout << "\nTotal penjualan selama 7 hari:\n"
                 << endl;
            for (int i = 0; i < 7; i++)
            {
                cout << hari[i] << ": ";
                int total_sales = sales[i][0] + sales[i][1];
                for (int j = 0; j < total_sales; j++)
                {
                    cout << "*";
                }
                cout << endl;
            }
        }
        else if (menu == 8)
        {
            // menampilkan rata-rata penjualan selama 7 hari dalam bentuk grafik
            cout << "\nRata-rata penjualan selama 7 hari:\n"
                 << endl;
            int total_sales = 0;
            for (int i = 0; i < 7; i++)
            {
                total_sales += sales[i][0] + sales[i][1];
            }
            double average_sales = total_sales / 7.0;
            cout << "Rata-rata: ";
            for (int i = 0; i < average_sales; i++)
            {
                cout << "*";
            }
            cout << endl;
        }
        else if (menu == 9)
        {
            keluar = true;
        }
        else
        {
            cout << "\nInput salah. Silakan input pilihan menu yang tersedia." << endl;
        }
    }
    return 0;
}
