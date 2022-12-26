// rekap data penjualan ayam geprek menggunakan nested loop, array 2D, dan if else serta tambahkan pilihan menu rekap data:
#include <iostream>
#include <cstring>

using namespace std;

const int MAX_AYAM_GEPREK = 10;      // maksimal jumlah ayam geprek yang dapat diinput
const int MAX_JENIS_AYAM_GEPREK = 3; // maksimal jenis ayam geprek yang dapat diinput

// Struktur data untuk menyimpan data ayam geprek
struct AyamGeprek
{
    string nama; // nama ayam geprek
    int harga;   // harga ayam geprek
    int jumlah;  // jumlah pembelian ayam geprek
};

int main()
{
    // Deklarasi array 2D untuk menyimpan data ayam geprek
    AyamGeprek ayamGeprek[MAX_JENIS_AYAM_GEPREK][MAX_AYAM_GEPREK];

    // Variabel untuk menyimpan pilihan menu
    int pilihan;

    // Lakukan perulangan sampai user memilih keluar dari menu
    do
    {
        // Tampilkan menu rekap data
        cout << "Menu Rekap Data Penjualan Ayam Geprek:" << endl;
        cout << "1. Input data penjualan ayam geprek" << endl;
        cout << "2. Tampilkan rekap data penjualan ayam geprek" << endl;
        cout << "3. Keluar" << endl;
        cout << "Masukkan pilihan Anda (1-3): ";
        cin >> pilihan;

        // Jika user memilih input data penjualan ayam geprek
        if (pilihan == 1)
        {
            // Variabel untuk menyimpan jumlah ayam geprek yang telah diinput
            int jumlahAyamGeprek = 0;

            // Lakukan perulangan sampai jumlah ayam geprek yang telah diinput mencapai maksimal
            while (jumlahAyamGeprek < MAX_AYAM_GEPREK)
            {
                // Tampilkan pesan untuk menginput data ayam geprek
                cout << "Input data ayam geprek ke-" << jumlahAyamGeprek + 1 << ":" << endl;

                // Input data ayam geprek
                cout << "Nama ayam geprek: ";
                cin >> ayamGeprek[jumlahAyamGeprek][0].nama;
                cout << "Harga ayam geprek: ";
                cin >> ayamGeprek[jumlahAyamGeprek][0].harga;
                cout << "Jumlah pembelian ayam geprek: ";
                cin >> ayamGeprek[jumlahAyamGeprek][0].jumlah;
                // Tambahkan jumlah ayam geprek yang telah diinput
                jumlahAyamGeprek++;
            }
        }
        // Jika user memilih tampilkan rekap data penjualan ayam geprek
        else if (pilihan == 2)
        {
            // Variabel untuk menyimpan total pendapatan dari penjualan ayam geprek
            int totalPendapatan = 0;

            // Tampilkan header tabel rekap data penjualan ayam geprek
            cout << "Rekap Data Penjualan Ayam Geprek:" << endl;
            cout << "No.\tNama\tHarga\tJumlah\tTotal" << endl;

            // Lakukan perulangan untuk setiap ayam geprek yang telah diinput
            for (int i = 0; i < MAX_AYAM_GEPREK; i++)
            {
                // Jika data ayam geprek tidak kosong (ada isinya)
                if (ayamGeprek[i][0].nama != "")
                {
                    // Hitung total pendapatan dari ayam geprek yang sedang dicari
                    int total = ayamGeprek[i][0].harga * ayamGeprek[i][0].jumlah;

                    // Tampilkan rekap data penjualan ayam geprek
                    cout << i + 1 << "\t" << ayamGeprek[i][0].nama << "\t" << ayamGeprek[i][0].harga << "\t" << ayamGeprek[i][0].jumlah << "\t" << total << endl;

                    // Tambahkan total pendapatan dari ayam geprek yang sedang dicari ke total pendapatan
                    totalPendapatan += total;
                }
            }

            // Tampilkan total pendapatan dari semua ayam geprek
            cout << "Total pendapatan: " << totalPendapatan << endl;
        }
    } while (pilihan != 3); // Selama pilihan tidak keluar, terus lakukan perulangan

    return 0;
}
