#include <iostream>
#include <string>

using namespace std;
/*
ISNA NUR AMALIA
A11.2022.14330
UAS DASPRO - Kamis, 29/12/2022
JUDUL: PROGRAM PENGOLAHAN DATA PEENJUALAN AYAM GEPREK SELAMA 7 HARI
*/

int main()
{
    // aray 2D utk menyimpan data penjualan ayam geprek selama 7 hari
    int sales[7][2];

    // array utk menyimpan nama hari dlm seminggu
    string hari[7] = {"senin", "selasa", "rabu  ", "kamis", "jumat", "sabtu", "minggu"};

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
        cout << "\n\n----PROGRAM PENGOLAHAN DATA PENJUALAN AYAM GEPREK SELAMA 7 HARI----" << endl;
        cout << "----Pilih menu pengolahan data penjualan:" << endl;
        cout << "1. tampilkan data penjualan setiap hari" << endl;
        cout << "2. cari hari dengan penjualan tertinggi" << endl;
        cout << "3. cari hari dengan penjualan terendah" << endl;
        cout << "4. hitung total penjualan selama 7 hari" << endl;
        cout << "5. tampilkan rata-rata penjualan selama 7 hari" << endl;
        cout << "6. tampilkan data penjualan pada hari tertentu" << endl;
        cout << "7. keluar dari program" << endl;
        cout << "----Masukkan pilihan kamu yah: ";
        cin >> menu;

        // if else utk memproses pilihan menu yang dipilih user
        if (menu == 1)
        {
            // nested loop utk menampilkan data penjualan setiap hari
            cout << "\n -----------------------------------------------------------------------" << endl;
            cout << "|No.\t|\tHari\t|\tTipe A\t|\tTipe B\t|\tTotal\t|" << endl;
            cout << "|-------|---------------|---------------|---------------|---------------|" << endl;
            for (int i = 0; i < 7; i++)
            {
                cout << "| " << i + 1 << "     | " << hari[i] << " \t| " << sales[i][0] << " \t\t| " << sales[i][1] << " \t\t| " << sales[i][0] + sales[i][1] << " \t\t|" << endl;
            }
            cout << " -----------------------------------------------------------------------" << endl;
        }
        else if (menu == 2)
        {
            // mencari hari dgn penjualan tertinggi
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
            // mencari hari dgn penjualan terendah
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
            cout << "\n -----------------------------------------------------------------------" << endl;
            cout << "|No.\t|\tHari\t|\tTipe A\t|\tTipe B\t|\tTotal\t|" << endl;
            cout << "|-------|---------------|---------------|---------------|---------------|" << endl;
            cout << "| " << day << "     | " << hari[day - 1] << " \t| " << sales[day - 1][0] << " \t\t| " << sales[day - 1][1] << " \t\t| " << sales[day - 1][0] + sales[day - 1][1] << " \t\t|" << endl;
            cout << " -----------------------------------------------------------------------" << endl;
        }
        else if (menu == 7)
        {
            keluar = true;
        }
        else
        {
            cout << "\nInput salah. Silahkan pilih yg ada di menu yahh" << endl;
        }
    }
    return 0;
}
