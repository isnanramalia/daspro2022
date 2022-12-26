// rekap data lain versi tp aneh
#include <iostream>
#include <string>

using namespace std;

const int NUM_MENU = 3; // jumlah menu yang tersedia
const int NUM_DAYS = 7; // jumlah hari dalam seminggu

// array 2D untuk menyimpan data penjualan setiap hari
int sales[NUM_MENU][NUM_DAYS];

// array untuk menyimpan nama menu
string menu[NUM_MENU] = {"Ayam Geprek Level 1", "Ayam Geprek Level 2", "Ayam Geprek Level 3"};

int main()
{
    // variabel untuk menyimpan pilihan menu yang dipilih user
    int choice;

    // loop untuk menampilkan menu dan memproses pilihan user
    while (true)
    {
        cout << "Pilih menu yang ingin Anda lihat rekap datanya:" << endl;
        cout << "1. Rekap data penjualan setiap hari" << endl;
        cout << "2. Rekap data menu paling laris" << endl;
        cout << "3. Rekap data menu paling tidak laris" << endl;
        cout << "4. Keluar" << endl;
        cin >> choice;

        // jika user memilih menu 1 (rekap data penjualan setiap hari)
        if (choice == 1)
        {
            // loop untuk menampilkan rekap data penjualan setiap hari
            for (int i = 0; i < NUM_MENU; i++)
            {
                cout << menu[i] << ":" << endl;
                for (int j = 0; j < NUM_DAYS; j++)
                {
                    cout << "Hari ke-" << (j + 1) << ": " << sales[i][j] << endl;
                }
                cout << endl;
            }
        }
        // jika user memilih menu 2 (rekap data menu paling laris)
        else if (choice == 2)
        {
            // variabel untuk menyimpan total penjualan setiap menu
            int total[NUM_MENU];

            // inisialisasi total penjualan setiap menu dengan 0
            for (int i = 0; i < NUM_MENU; i++)
            {
                total[i] = 0;
            }

            // loop untuk menghitung total penjualan setiap menu
            for (int i = 0; i < NUM_MENU; i++)
            {
                for (int j = 0; j < NUM_DAYS; j++)
                {
                    total[i] += sales[i][j];
                }
            }

            // variabel untuk menyimpan indeks menu dengan penjualan terbanyak
            int maxIndex = 0;

            // loop untuk mencari indeks menu dengan penjualan terbanyak
            for (int i = 1; i < NUM_MENU; i++)
            {
                if (total[i] > total[maxIndex])
                {
                    maxIndex = i;
                }
            }
            // tampilkan menu dengan penjualan terbanyak
            cout << "Menu paling laris adalah " << menu[maxIndex] << " dengan total penjualan sebesar " << total[maxIndex] << endl;
        }
        // jika user memilih menu 3 (rekap data menu paling tidak laris)
        else if (choice == 3)
        {
            // variabel untuk menyimpan total penjualan setiap menu
            int total[NUM_MENU];

            // inisialisasi total penjualan setiap menu dengan 0
            for (int i = 0; i < NUM_MENU; i++)
            {
                total[i] = 0;
            }

            // loop untuk menghitung total penjualan setiap menu
            for (int i = 0; i < NUM_MENU; i++)
            {
                for (int j = 0; j < NUM_DAYS; j++)
                {
                    total[i] += sales[i][j];
                }
            }

            // variabel untuk menyimpan indeks menu dengan penjualan terkecil
            int minIndex = 0;

            // loop untuk mencari indeks menu dengan penjualan terkecil
            for (int i = 1; i < NUM_MENU; i++)
            {
                if (total[i] < total[minIndex])
                {
                    minIndex = i;
                }
            }

            // tampilkan menu dengan penjualan terkecil
            cout << "Menu paling tidak laris adalah " << menu[minIndex] << " dengan total penjualan sebesar " << total[minIndex] << endl;
        }
        // jika user memilih menu 4 (keluar)
        else if (choice == 4)
        {
            // keluar dari loop
            break;
        }
        // jika user memasukkan pilihan yang tidak valid
        else
        {
            cout << "Pilihan tidak valid, silakan coba lagi." << endl;
        }
    }

    return 0;
}