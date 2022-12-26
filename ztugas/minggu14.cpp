#include <iostream>
/*
ISNA NUR AMALIA
Senin, 19 12 2022 - D2G
Sistem Rekap Nilai Mahasiswa
*/
using namespace std;

int main()
{
    // KAMUS
    string nim[50], nama[50];
    float nilai[50][4];
    int jmlMhs, pil;
    char ljt;
    float tamNil;
    float nilaiMax = 0, nilaiMin = 100, nilaiSum = 0, nilaiRata;
    int iMax, iMin;

    // ALGORITMA
    cout << "Masukkan banyak mahasiswa = ";
    cin >> jmlMhs;
    for (int i = 0; i < jmlMhs; i++)
    {
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "Masukkan NIM = ";
        cin >> nim[i];
        cout << "Masukkan Nama (tanpa spasi) = ";
        cin >> nama[i];
        for (int j = 0; j < 3; j++)
        {
            if (j == 0)
            {
                cout << "Masukkan nilai UTS = ";
            }
            else if (j == 1)
            {
                cout << "Masukkan nilai UAS = ";
            }
            else
            {
                cout << "Masukkan nilai Tugas = ";
            }
            cin >> nilai[i][j];
            if ((nilai[i][j] < 0) || (nilai[i][j] > 100))
            {
                cout << "Masukkan nilai lagi antara 0-100 = ";
                cin >> nilai[i][j];
            }
        }
        nilai[i][3] = (nilai[i][0] * 0.3) + (nilai[i][1] * 0.3) + (nilai[i][2]) * 0.4;
        cout << "Nilai total = " << nilai[i][3] << "\n\n";
    }

    // CETAK
    cout << "| No\t| NIM\t| Nama\t| UTS\t| UAS\t| Tugas\t| Total |\n";
    for (int i = 0; i < jmlMhs; i++)
    {
        cout << "| " << i + 1 << "\t| " << nim[i] << "\t| " << nama[i] << "\t| ";
        for (int j = 0; j < 4; j++)
        {
            cout << nilai[i][j] << "\t| ";
        }
        cout << endl;
    }

    do
    {
        cout << "\nPilihan:\n1. Tambah nilai\n2. Analisa data\nMasukkan pilihan = ";
        cin >> pil;
        if (pil == 1)
        {
            cout << "\n--Tambah nilai--\nMasukkan nilai yang ingin ditambah = ";
            cin >> tamNil;
            for (int i = 0; i < jmlMhs; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    nilai[i][j] = nilai[i][j] + tamNil > 100 ? 100 : nilai[i][j] + tamNil;
                }
                nilai[i][3] = (nilai[i][0] * 0.3) + (nilai[i][1] * 0.3) + (nilai[i][2]) * 0.4;
            }
            // Cetak
            cout << "| No\t| NIM\t| Nama\t| UTS\t| UAS\t| Tugas\t| Total |\n";
            for (int i = 0; i < jmlMhs; i++)
            {
                cout << "| " << i + 1 << "\t| " << nim[i] << "\t| " << nama[i] << "\t| ";
                for (int j = 0; j < 4; j++)
                {
                    cout << nilai[i][j] << "\t| ";
                }
                cout << endl;
            }
        }
        else if (pil == 2)
        {
            for (int i = 0; i < jmlMhs; i++)
            {
                if (nilai[i][3] > nilaiMax)
                {
                    nilaiMax = nilai[i][3];
                    iMax = i;
                }
                if (nilai[i][3] < nilaiMin)
                {
                    nilaiMin = nilai[i][3];
                    iMin = i;
                }
                nilaiSum += nilai[i][3];
            }
            cout << "\n--Analisa Data berdasarkan nilai akhir--\n";
            cout << "Nilai max = " << nilaiMax << " diperoleh Mahasiswa " << nama[iMax] << " dengan NIM " << nim[iMax] << endl;
            cout << "Nilai min = " << nilaiMin << " diperoleh Mahasiswa " << nama[iMin] << " dengan NIM " << nim[iMin] << endl;
            nilaiRata = nilaiSum / jmlMhs;
            cout << "Nilai rata-rata = " << nilaiRata << endl;
        }
        else
        {
            cout << "Pilihan Anda salah." << endl;
        }
        cout << "\nIngin melanjutkan? (y/n) = ";
        cin >> ljt;
    } while (ljt == 'y');
    return 0;
}
