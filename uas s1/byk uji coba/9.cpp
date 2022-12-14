// versi 2 program 30 hari
#include <iostream>
#include <cstring>

using namespace std;

const int MAX_ITEMS = 10; // Maksimum jumlah menu yang tersedia
const int MAX_DAYS = 30;  // Maksimum jumlah hari yang akan didata

int main()
{
    // Buat array 2D untuk menyimpan jumlah penjualan setiap menu setiap hari
    int sales[MAX_ITEMS][MAX_DAYS];
    memset(sales, 0, sizeof(sales)); // Inisialisasi semua elemen array dengan 0

    // Buat array untuk menyimpan nama menu
    string items[MAX_ITEMS] = {"Ayam Geprek Biasa", "Ayam Geprek Spesial", "Ayam Geprek Super Spesial", "Ayam Geprek Pedas Banget", "Ayam Geprek Saus BBQ", "Ayam Geprek Saus Tomat", "Ayam Geprek Saus Cabe Hijau", "Ayam Geprek Saus Kacang", "Ayam Geprek Saus Mentega", "Ayam Geprek Saus Keju"};

    // Loop untuk meminta input penjualan setiap menu setiap hari
    for (int i = 0; i < MAX_ITEMS; i++)
    {
        cout << "Masukkan jumlah penjualan " << items[i] << " setiap hari: " << endl;
        for (int j = 0; j < MAX_DAYS; j++)
        {
            cout << "Hari ke-" << j + 1 << ": ";
            cin >> sales[i][j];
        }
        cout << endl;
    }
    // Loop untuk menampilkan hasil input
    cout << "Hasil Pendataan Penjualan Ayam Geprek:" << endl;
    for (int i = 0; i < MAX_ITEMS; i++)
    {
        cout << items[i] << ": ";
        for (int j = 0; j < MAX_DAYS; j++)
        {
            cout << sales[i][j] << " ";
        }
        cout << endl;
    }

    // Hitung total penjualan setiap menu
    int totalSales[MAX_ITEMS];
    memset(totalSales, 0, sizeof(totalSales));

    for (int i = 0; i < MAX_ITEMS; i++)
    {
        for (int j = 0; j < MAX_DAYS; j++)
        {
            totalSales[i] += sales[i][j];
        }
    }

    // Tampilkan total penjualan setiap menu
    cout << "Total Penjualan Setiap Menu:" << endl;
    for (int i = 0; i < MAX_ITEMS; i++)
    {
        cout << items[i] << ": " << totalSales[i] << endl;
    }

    // Cari menu dengan penjualan tertinggi
    int maxSales = totalSales[0];
    int maxSalesIndex = 0;
    for (int i = 1; i < MAX_ITEMS; i++)
    {
        if (totalSales[i] > maxSales)
        {
            maxSales = totalSales[i];
            maxSalesIndex = i;
        }
    }

    // Tampilkan menu dengan penjualan tertinggi
    cout << "Menu dengan penjualan tertinggi adalah " << items[maxSalesIndex] << " dengan jumlah penjualan sebanyak " << maxSales << "." << endl;

    return 0;
}
