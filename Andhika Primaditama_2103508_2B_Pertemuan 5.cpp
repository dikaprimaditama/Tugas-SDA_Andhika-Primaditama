#include <iostream>

using namespace std;

struct data_barang{
    int kode;
    string nama;
    int jumlah;
};

int jumlah_barang_input = 0;

void inputan_barang (data_barang *datbar);

void output_barang (data_barang *datbar);

int opsi_menu();

int main()
{
    data_barang *datbar = new data_barang [20];
    int opsi;
    while(true)
    {
        opsi = opsi_menu();
        if (opsi == 1)
        {
            inputan_barang(datbar);
        }
        else if (opsi == 2)
        {
            output_barang(datbar);
        }
        else if (opsi < 1 || opsi > 2)
        {
            cout << "Mohon Pilih Opsi [1-2] !!!" << endl;
        }
    }
}

int opsi_menu()
{
    int opsi;
    cout << endl;
    cout << "===================" << endl;
    cout << "=== DATA BARANG ===" << endl;
    cout << "===================" << endl;
    cout << "1. Input Barang" << endl;
    cout << "2. List Barang" << endl;
    cout << "===================" << endl;
    cout << "Masukan Opsi [1-2] : ";
    cin >> opsi;

    return opsi;
}

void inputan_barang(data_barang *datbar)
{
    int kode;
    string nama;
    int jumlah;
    cout << endl;
    cout << "=== Input Barang ===" << endl;
    cout << "Masukan Kode Barang : ";
    cin >> kode;
    cout << "Masukan Nama Barang : ";
    cin >> nama;
    cout << "Masukan Jumlah Barang : ";
    cin >> jumlah;

    datbar[jumlah_barang_input].kode = kode;
    datbar[jumlah_barang_input].nama = nama;
    datbar[jumlah_barang_input].jumlah = jumlah;
    jumlah_barang_input++;
}

void output_barang(data_barang *datbar)
{
    cout << endl;
    cout << "=== List Barang ===" << endl;
    for (int i = 0; i < jumlah_barang_input; i++)
    {
        cout << "===================" << endl;
        cout << "Barang Ke-" << i + 1 << endl;
        cout << "Kode Barang : " << datbar[i].kode << endl;
        cout << "Nama Barang : " << datbar[i].nama << endl;
        cout << "Jumlah Barang : " << datbar[i].jumlah << endl;
        cout << "===================" << endl;
    }

}
