#include <iostream>
/*
Maulidya Ayu A. - A11.2022.14310
Senin, 19 Desember 2022

jUDUL : Program Sistem Rekap Nilai Mahasiswa
*/
using namespace std;

int main()
{
    // KAMUS
    string kvendor;
    int inch[5] = {22, 24, 27, 32};
    float stok[50][4];
    int pilih, msk, lolos = 0, gagal = 0, jk = 0, berat, jm = 0, jmlm, jmlk;
    char ljt;

    // ALGORITMA
    cout << "List vendor pemasok:" << endl;
    cout << "1. CV Niaga General ANdalan Bersama (NGAB)\n";
    cout << "2. CV Sunda Alat Elektronik (SAE)\n";
    cout << "3. CV Hartono Unggul Filamen Teknovisi (HUFT)\n"
         << endl;
    cout << "List monitor:" << endl;
    cout << "1. Monitor 22 inch\n";
    cout << "2. Monitor 24 inch\n";
    cout << "3. Monitor 27 inch\n";
    cout << "3. Monitor 32 inch\n"
         << endl;
    cout << "\nStock Barang: " << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << i + 1 << ". Untuk monitor " << inch[i] << " inch: " << endl;
        for (int j = 0; j < 3; j++)
        {
            if (j == 0)
            {
                cout << "Stock dari Vendor NGAB = ";
            }
            else if (j == 1)
            {
                cout << "Stock dari Vendor SAE = ";
            }
            else
            {
                cout << "Stock dari Vendor HUFT = ";
            }
            cin >> stok[i][j];
        }
        stok[i][3] = stok[i][0] + stok[i][1] + stok[i][2];
        cout << "Total stok monitor " << inch[i] << " inch adalah " << stok[i][3] << endl
             << endl;
    }

    // cetak
    cout << "---------------------------------------------------------" << endl;
    cout << "| No\t| Inch  \t| NGAB\t| SAE\t| HUFT\t| Total\t|" << endl;
    cout << "---------------------------------------------------------" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "| " << i + 1 << "\t| " << inch[i] << "inch\t| ";
        for (int j = 0; j < 4; j++)
        {
            cout << stok[i][j] << "\t| ";
        }
        cout << endl;
    }
    cout << "---------------------------------------------------------" << endl;

    // pilihan
    do
    {
        cout << "PILIHAN:" << endl;
        cout << "1. Barang masuk" << endl;
        cout << "2. Barang keluar" << endl;
        cout << "Apa yang akan kamu input (1/2)? ";
        cin >> pilih;

        if (pilih == 1)
        {
            cout << "\nInput kode vendor(NGAB/SAE/HUFT) = ";
            cin >> kvendor;
            while (kvendor != "NGAB" && kvendor != "ngab" && kvendor != "SAE" && kvendor != "sae" && kvendor != "HUFT" && kvendor != "huft")
            {
                cout << "Masukkan kode vendor lagi antara NGAB/SAE/HUFT = ";
                cin >> kvendor;
            }
            if (kvendor == "NGAB" || kvendor == "ngab")
            {
                cout << "Jumlah barang yang akan masuk gudang = ";
                cin >> jmlm;
                for (int i = 0; i < jmlm; i++)
                {
                    cout << "\nBerat box ke-" << i + 1 << "(kg)= ";
                    cin >> berat;
                    if (2.3 <= berat && berat <= 5)
                    {
                        cout << "Masukkan inch (22/24/27/32)= ";
                        cin >> msk;
                        while (msk != 22 && msk != 24 && msk != 27 && msk != 32)
                        {
                            cout << "Masukkan lagi inch antara 22/24/27/32 = ";
                            cin >> msk;
                        }
                        lolos++;
                        if (msk == 22)
                        {
                            stok[0][3] = ++stok[0][0] + stok[0][1] + stok[0][2];
                        }
                        else if (msk == 24)
                        {
                            stok[1][3] = ++stok[1][0] + stok[1][1] + stok[1][2];
                        }
                        else if (msk == 27)
                        {
                            stok[2][3] = ++stok[2][0] + stok[2][1] + stok[2][2];
                        }
                        else if (msk == 32)
                        {
                            stok[3][3] = ++stok[3][0] + stok[3][1] + stok[3][2];
                        }
                    }
                    else
                    {
                        cout << "Berat box tidak memenuhi standar QC" << endl;
                        gagal++;
                    }
                }
                jm += jmlm;
            }

            else if (kvendor == "SAE" || kvendor == "sae")
            {
                cout << "Jumlah barang yang akan masuk gudang = ";
                cin >> jmlm;
                for (int i = 0; i < jmlm; i++)
                {
                    cout << "\nBerat box ke-" << i + 1 << "(kg)= ";
                    cin >> berat;
                    if (2.3 <= berat && berat <= 5)
                    {
                        cout << "Masukkan inch (22/24/27/32)= ";
                        cin >> msk;
                        while (msk != 22 && msk != 24 && msk != 27 && msk != 32)
                        {
                            cout << "Masukkan lagi inch antara 22/24/27/32 = ";
                            cin >> msk;
                        }
                        lolos++;
                        if (msk == 22)
                        {
                            stok[0][3] = stok[0][0] + ++stok[0][1] + stok[0][2];
                        }
                        else if (msk == 24)
                        {
                            stok[1][3] = stok[1][0] + ++stok[1][1] + stok[1][2];
                        }
                        else if (msk == 27)
                        {
                            stok[2][3] = stok[2][0] + ++stok[2][1] + stok[2][2];
                        }
                        else if (msk == 32)
                        {
                            stok[3][3] = stok[3][0] + ++stok[3][1] + stok[3][2];
                        }
                    }
                    else
                    {
                        cout << "Berat box tidak memenuhi standar QC" << endl;
                        gagal++;
                    }
                }
                jm += jmlm;
            }

            else if (kvendor == "HUFT" || kvendor == "huft")
            {
                cout << "Jumlah barang yang akan masuk gudang = ";
                cin >> jmlm;
                for (int i = 0; i < jmlm; i++)
                {
                    cout << "\nBerat box ke-" << i + 1 << "(kg)= ";
                    cin >> berat;
                    if (2.3 <= berat && berat <= 5)
                    {
                        cout << "Masukkan inch (22/24/27/32)= ";
                        cin >> msk;
                        while (msk != 22 && msk != 24 && msk != 27 && msk != 32)
                        {
                            cout << "Masukkan lagi inch antara 22/24/27/32 = ";
                            cin >> msk;
                        }
                        lolos++;
                        if (msk == 22)
                        {
                            stok[0][3] = stok[0][0] + stok[0][1] + ++stok[0][2];
                        }
                        else if (msk == 24)
                        {
                            stok[1][3] = stok[1][0] + stok[1][1] + ++stok[1][2];
                        }
                        else if (msk == 27)
                        {
                            stok[2][3] = stok[2][0] + stok[2][1] + ++stok[2][2];
                        }
                        else if (msk == 32)
                        {
                            stok[3][3] = stok[3][0] + stok[3][1] + ++stok[3][2];
                        }
                    }
                    else
                    {
                        cout << "Berat box tidak memenuhi standar QC" << endl;
                        gagal++;
                    }
                }
                jm += jmlm;
            }
            cout << endl;
            cout << "\nHasil QC:";
            cout << "\nTotal box yang lolos QC = " << lolos << endl;
            cout << "tootal box yang tidak lolos QC = " << gagal << endl;

            // cetak
            cout << "\nStock barang saat ini:" << endl;
            cout << "---------------------------------------------------------" << endl;
            cout << "| No\t| Inch  \t| NGAB\t| SAE\t| HUFT\t| Total\t|" << endl;
            cout << "---------------------------------------------------------" << endl;
            for (int i = 0; i < 4; i++)
            {
                cout << "| " << i + 1 << "\t| " << inch[i] << "inch\t| ";
                for (int j = 0; j < 4; j++)
                {
                    cout << stok[i][j] << "\t| ";
                }
                cout << endl;
            }
            cout << "---------------------------------------------------------" << endl;
        }
        else if (pilih == 2)
        {
            cout << "\nInput kode vendor(NGAB/SAE/HUFT) = ";
            cin >> kvendor;
            while (kvendor != "NGAB" && kvendor != "ngab" && kvendor != "SAE" && kvendor != "sae" && kvendor != "HUFT" && kvendor != "huft")
            {
                cout << "Masukkan kode vendor lagi antara NGAB/SAE/HUFT = ";
                cin >> kvendor;
            }
            if (kvendor == "NGAB" || kvendor == "ngab")
            {
                cout << "Jumlah barang yang akan keluar gudang = ";
                cin >> jmlk;
                for (int i = 0; i < jmlk; i++)
                {
                    cout << "Masukkan inch (22/24/27/32)= ";
                    cin >> msk;
                    while (msk != 22 && msk != 24 && msk != 27 && msk != 32)
                    {
                        cout << "Masukkan lagi inch antara 22/24/27/32 = ";
                        cin >> msk;
                    }
                    if (msk == 22)
                    {
                        stok[0][3] = --stok[0][0] + stok[0][1] + stok[0][2];
                    }
                    else if (msk == 24)
                    {
                        stok[1][3] = --stok[1][0] + stok[1][1] + stok[1][2];
                    }
                    else if (msk == 27)
                    {
                        stok[2][3] = --stok[2][0] + stok[2][1] + stok[2][2];
                    }
                    else if (msk == 32)
                    {
                        stok[3][3] = --stok[3][0] + stok[3][1] + stok[3][2];
                    }
                }
                jk += jmlk;
            }

            else if (kvendor == "SAE" || kvendor == "sae")
            {
                cout << "Jumlah barang yang akan keluar gudang = ";
                cin >> jmlk;
                for (int i = 0; i < jmlk; i++)
                {
                    cout << "Masukkan inch (22/24/27/32)= ";
                    cin >> msk;
                    while (msk != 22 && msk != 24 && msk != 27 && msk != 32)
                    {
                        cout << "Masukkan lagi inch antara 22/24/27/32 = ";
                        cin >> msk;
                    }
                    if (msk == 22)
                    {
                        stok[0][3] = stok[0][0] + --stok[0][1] + stok[0][2];
                    }
                    else if (msk == 24)
                    {
                        stok[1][3] = stok[1][0] + --stok[1][1] + stok[1][2];
                    }
                    else if (msk == 27)
                    {
                        stok[2][3] = stok[2][0] + --stok[2][1] + stok[2][2];
                    }
                    else if (msk == 32)
                    {
                        stok[3][3] = stok[3][0] + --stok[3][1] + stok[3][2];
                    }
                }
                jk += jmlk;
            }

            else if (kvendor == "HUFT" || kvendor == "huft")
            {
                cout << "Jumlah barang yang akan keluar gudang = ";
                cin >> jmlk;
                for (int i = 0; i < jmlk; i++)
                {
                    cout << "Masukkan inch (22/24/27/32)= ";
                    cin >> msk;
                    while (msk != 22 && msk != 24 && msk != 27 && msk != 32)
                    {
                        cout << "Masukkan lagi inch antara 22/24/27/32 = ";
                        cin >> msk;
                    }
                    if (msk == 22)
                    {
                        stok[0][3] = stok[0][0] + stok[0][1] + --stok[0][2];
                    }
                    else if (msk == 24)
                    {
                        stok[1][3] = stok[1][0] + stok[1][1] + --stok[1][2];
                    }
                    else if (msk == 27)
                    {
                        stok[2][3] = stok[2][0] + stok[2][1] + --stok[2][2];
                    }
                    else if (msk == 32)
                    {
                        stok[3][3] = stok[3][0] + stok[3][1] + --stok[3][2];
                    }
                }
                jk += jmlk;
            }
            // cetak
            cout << "\nStock barang saat ini:" << endl;
            cout << "---------------------------------------------------------" << endl;
            cout << "| No\t| Inch  \t| NGAB\t| SAE\t| HUFT\t| Total\t|" << endl;
            cout << "---------------------------------------------------------" << endl;
            for (int i = 0; i < 4; i++)
            {
                cout << "| " << i + 1 << "\t| " << inch[i] << "inch\t| ";
                for (int j = 0; j < 4; j++)
                {
                    cout << stok[i][j] << "\t| ";
                }
                cout << endl;
            }
            cout << "---------------------------------------------------------" << endl;
        }
        else
        {
            cout << "Pilihan anda salah." << endl;
        }
        cout << "\nIngin melanjutkan? (y/n) = ";
        cin >> ljt;

    } while (ljt == 'y');
    if (ljt == 'n')
    {
        cout << "Total barang yang masuk ke gudang adalah " << jm << endl;
        cout << "Total barang yang keluar dari gudang adalah " << jk << endl;
        cout << "persentasi barang masuk yang lolos QC : " << (lolos / jm) * 100 << "%" << endl;
        cout << "persentasi barang masuk yang tidak lolos QC : " << (gagal / jm) * 100 << "%" << endl;
    }

    return 0;
}
