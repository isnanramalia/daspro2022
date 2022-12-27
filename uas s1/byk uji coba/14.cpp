// versi dari 13 tapi ditambahkan fitur lagi
/*
Fitur yang ditambahkan adalah:
1. Menambahkan struktur data `ChickenType` yang digunakan untuk menyimpan data tipe ayam geprek dan data penjualannya selama 7 hari.
2. Menambahkan fitur untuk menambah tipe ayam geprek baru.
3. Menambahkan fitur
4. Menambahkan fitur untuk membuat laporan penjualan.
5. Menambahkan fitur untuk membuat grafik penjualan.
*/

#include <iostream>
#include <string>
#include <limits>

using namespace std;

const int DAYS_IN_WEEK = 7;     // menggunakan konstanta untuk jumlah hari dalam seminggu
const int MAX_TYPES_COUNT = 10; // menggunakan konstanta untuk jumlah maksimum tipe ayam geprek

struct ChickenType
{
    string name;             // nama tipe ayam geprek
    int sales[DAYS_IN_WEEK]; // data penjualan setiap harinya
};

int main()
{
    int types_count = 2;                        // jumlah tipe ayam geprek yang tersedia
    ChickenType chicken_types[MAX_TYPES_COUNT]; // array untuk menyimpan data tipe ayam geprek

    // input data tipe ayam geprek dan data penjualan selama 7 hari dari user
    for (int i = 0; i < types_count; i++)
    {
        cout << "\nMasukkan data tipe ayam geprek ke-" << i + 1 << ":" << endl;
        cout << " Nama tipe: ";
        cin >> chicken_types[i].name;
        for (int j = 0; j < DAYS_IN_WEEK; j++)
        {
            cout << " Penjualan hari ke-" << j + 1 << ": ";
            while (!(cin >> chicken_types[i].sales[j]))
            { // validasi input harus angka
                cout << "Input harus angka, silakan masukkan ulang: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
    }

    // output menu pengolahan data penjualan
    int menu;
    do
    {
        cout << "\n----PROGRAM PENGOLAHAN DATA PENJUALAN AYAM GEPREK SELAMA 7 HARI----" << endl;
        cout << "\n----Pilih menu pengolahan data penjualan:" << endl;
        cout << "1. Tampilkan data penjualan setiap hari" << endl;
        cout << "2. Cari hari dengan penjualan tertinggi" << endl;
        cout << "3. Hitung total penjualan selama 7 hari" << endl;
        cout << "4. Tambah tipe ayam geprek" << endl;
        cout << "5. Pembuatan laporan penjualan" << endl;
        cout << "6. Pembuatan grafik penjualan" << endl;
        cout << "7. Keluar dari program" << endl;
        cout << "Masukkan pilihan Anda: ";
    }

    while (!(cin >> menu) || menu < 1 || menu > 7)
    { // validasi input harus angka dan harus pilihan menu yang tersedia
        cout << "Input harus angka dan merupakan pilihan menu yang tersedia, silakan masukkan ulang: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // switch case untuk memproses pilihan menu yang dipilih user
    switch (menu)
    {
    case 1:
    {
        // menampilkan data penjualan setiap hari dalam tabel
        cout << "\n| No. |";
        for (int i = 0; i < types_count; i++)
        {
            cout << " " << chicken_types[i].name << " |";
        }
        cout << " Total |" << endl;
        cout << "|-----|";
        for (int i = 0; i < types_count; i++)
        {
            for (int j = 0; j < chicken_types[i].name.length(); j++)
            {
                cout << "-";
            }
            cout << "-|";
        }
        cout << "-------|" << endl;
        for (int i = 0; i < DAYS_IN_WEEK; i++)
        {
            cout << "| " << i + 1 << " |";
            int total = 0;
            for (int j = 0; j < types_count; j++)
            {
                cout << " " << chicken_types[j].sales[i] << " |";
                total += chicken_types[j].sales[i];
            }
            cout << " " << total << " |" << endl;
        }
        break;
    }
    case 2:
    {
        // mencari hari dengan penjualan tertinggi
        int highest_sales = 0;
        int highest_sales_day = 0;
        for (int i = 0; i < DAYS_IN_WEEK; i++)
        {
            int total = 0;
            for (int j = 0; j < types_count; j++)
            {
                total += chicken_types[j].sales[i];
            }
            if (total > highest_sales)
            {
                highest_sales = total;
                highest_sales_day = i + 1;
            }
        }
        cout << "\nHari dengan penjualan tertinggi adalah hari ke-" << highest_sales_day << " dengan penjualan sebesar " << highest_sales << "." << endl;
        break;
    }
    case 3:
    {
        // menghitung total penjualan selama 7 hari
        int total_sales = 0;
        for (int i = 0; i < DAYS_IN_WEEK; i++)
        {
            for (int j = 0; j < types_count; j++)
            {
                total_sales += chicken_types[j].sales[i];
            }
        }
    cout << "\nTotal penjualan selama 7 hari adalah " << total_sales case 4:
    {
        // menambah tipe ayam geprek baru
        if (types_count < MAX_TYPES_COUNT)
        {
            cout << "\nMasukkan data tipe ayam geprek baru:" << endl;
            cout << " Nama tipe: ";
            cin >> chicken_types[types_count].name;
            for (int i = 0; i < DAYS_IN_WEEK; i++)
            {
                cout << " Penjualan hari ke-" << i + 1 << ": ";
                while (!(cin >> chicken_types[types_count].sales[i]))
                { // validasi input harus angka
                    cout << "Input harus angka, silakan masukkan ulang: ";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
            }
            types_count++;
            cout << "\nTipe ayam geprek baru telah ditambahkan." << endl;
        }
        else
        {
            cout << "\nMaksimum jumlah tipe ayam geprek adalah " << MAX_TYPES_COUNT << ". Tidak bisa menambah tipe ayam geprek lagi." << endl;
        }
        break;
    }
    case 5:
    {
        // pembuatan laporan penjualan
        cout << "\nLAPORAN PENJUALAN AYAM GEPREK SELAMA 7 HARI" << endl;
        cout << "\n| No. |";
        for (int i = 0; i < types_count; i++)
        {
            cout << " " << chicken_types[i].name << " |";
        }
        cout << " Total |" << endl;
        cout << "|-----|";
        for (int i = 0; i < types_count; i++)
        {
            for (int j = 0; j < chicken_types[i].name.length(); j++)
            {
                cout << "-";
            }
            cout << "-|";
        }
        cout << "-------|" << endl;
        for (int i = 0; i < DAYS_IN_WEEK; i++)
        {
            cout << "| " << i + 1 << " |";
            int total = 0;
            for (int j = 0; j < types_count; j++)
            {
                cout << " " << chicken_types[j].sales[i] << " |";
                total += chicken_types[j].sales[i];
            }
            cout << " " << total << " |" << endl;
        }
        cout << "\n| Tipe |";
        for (int i = 0; i < types_count; i++)
        {
            cout << " " << chicken_types[i].name << " |";
        }
        cout << " Total |" << endl;
        cout << "|------|";
        for (int i = 0; i < types_count; i++)
        {
            for (int j = 0; j < chicken_types[i].name.length(); j++)
            {
                cout << "-";
            }
            cout << "-|";
        }
        cout << "-------|" << endl;
        int grand_total = 0;
        for (int i = 0; i < types_count; i++)
        {
            int total = 0;
            cout << "| " << chicken_types[i].name << " |";
            for (int j = 0; j < DAYS_IN_WEEK; j++)
            {
                cout << " " << chicken_types[i].sales[j] << " |";
                total += chicken_types[i].sales[j];
                grand_total += chicken_types[i].sales[j];
            }
            cout << " " << total << " |" << endl;
        }
        cout << "|------|";
        for (int i = 0; i < types_count; i++)
        {
            for (int j = 0; j < chicken_types[i].name.length(); j++)
            {
                cout << "-";
            }
            cout << "-|";
        }
        cout << "-------|" << endl;
        cout << "| Total |";
        for (int i = 0; i < types_count; i++)
        {
            int total = 0;
            for (int j = 0; j < DAYS_IN_WEEK; j++)
            {
                total += chicken_types[i].sales[j];
            }
            cout << " " << total << " |";
        }
        cout << " " << grand_total << " |" << endl;
        break;
    }

    case 6:
    {
        // pembuatan grafik penjualan
        int max_sales = 0;
        for (int i = 0; i < types_count; i++)
        {
            int total_sales = 0;
            for (int j = 0; j < DAYS_IN_WEEK; j++)
            {
                total_sales += chicken_types[i].sales[j];
            }
            if (total_sales > max_sales)
            {
                max_sales = total_sales;
            }
        }
        // menampilkan grafik penjualan
        cout << "\nGRAFIK PENJUALAN AYAM GEPREK SELAMA 7 HARI" << endl;
        cout << "Hari: ";
        for (int i = 0; i < DAYS_IN_WEEK; i++)
        {
            cout << " " << i + 1;
        }
        cout << endl;
        for (int i = max_sales; i >= 0; i--)
        {
            cout << " " << i << " |";
            for (int j = 0; j < types_count; j++)
            {
                for (int k = 0; k < DAYS_IN_WEEK; k++)
                {
                    if (chicken_types[j].sales[k] >= i)
                    {
                        cout << " *";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
            }
            cout << endl;
        }
        cout << " ";
        for (int i = 0; i < types_count; i++)
        {
            cout << " " << chicken_types[i].name;
        }
        cout << endl;
        break;
    }
    case 7:
    {
        // keluar dari program
        cout << "\nAnda telah keluar dari program." << endl;
        break;
    }
    }
    }
    while (menu != 7)
        ;
    return 0;
}
