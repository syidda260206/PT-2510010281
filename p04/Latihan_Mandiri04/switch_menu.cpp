#include <iostream>
using namespace std;

int main() {
    char pilihan; // Diubah menjadi char
    cout << "=== Menu SiNilai ===\n";
    cout << "1. Tampilkan kartu nilai\n";
    cout << "2. Hitung ulang\n";
    cout << "3. Keluar\n";
    cout << "k. Keluar dari program\n";
    cout << "Pilihan: ";
    cin >> pilihan;

    switch (pilihan) {
        case '1':
            cout << "Menampilkan kartu nilai...\n";
            break;
        case '2':
            cout << "Menghitung ulang...\n";
            break;
        case '3':
        case 'k': // Menambahkan kasus 'k'
            cout << "Sampai jumpa.\n";
            break;
        default:
            cout << "Pilihan tidak dikenal.\n";
    }

    return 0;
}