#include <iostream>
#include <string>

using namespace std;

// Mendefinisikan class Barang
class Barang {
public: 
    // Atribut 
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    // Constructor 
    Barang(string n, int j, string k, string t) {
        nama = n;
        jumlah = j;
        kategori = k;
        tanggalProduksi = t;
    }

    // Method 
    void tampilkanSpesifikasi() {
        cout << "=== Spesifikasi Barang ===" << endl;
        cout << "Nama Barang      : " << nama << endl;
        cout << "Jumlah           : " << jumlah << " unit" << endl;
        cout << "Kategori         : " << kategori << endl;
        cout << "Tanggal Produksi : " << tanggalProduksi << endl;
        cout << "--------------------------" << endl;
    }
};

int main() {
    // 1. Object elektronik
    Barang elektronik("Laptop Asus TUF", 15, "Elektronik", "5 Maret 2026");

    // 2. Object nonElektronik
    Barang nonElektronik("Lemari Kayu Jati", 30, "Furnitur", "20 Februari 2026");

    elektronik.tampilkanSpesifikasi();
    nonElektronik.tampilkanSpesifikasi();

    return 0;
}