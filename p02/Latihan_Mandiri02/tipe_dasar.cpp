// tipe_dasar.cpp
// Lima tipe data yang kita pakai sepanjang semester.
#include <iostream>
#include <string>

using namespace std;

int main() {
    int jumlah_mahasiswa = 32;          // bilangan bulat
    double nilai_uts = 78.5;             // bilangan pecahan
    char huruf_mutu = 'B';               // satu karakter, diapit kutip tunggal
    bool lulus = true;                   // benar atau salah
    string nama = "Siti Aminah";         // teks, diapit kutip ganda

    cout << "Jumlah mahasiswa : " << jumlah_mahasiswa << "\n";
    cout << "Nilai UTS        : " << nilai_uts << "\n";
    cout << "Huruf mutu       : " << huruf_mutu << "\n";
    
    // Menggunakan boolalpha agar nilai bool dicetak sebagai true/false
    cout << "Lulus            : " << boolalpha << lulus << "\n";
    
    cout << "Nama             : " << nama << "\n";

    cout << "\nUkuran di memori (byte): int " << sizeof(int)
         << ", double " << sizeof(double)
         << ", char " << sizeof(char)
         << ", bool " << sizeof(bool) << "\n";

    return 0;
}

//Penambahan manipulator boolalpha pada baris cout << "Lulus : " << boolalpha << lulus << "\n"; mengatur stream
//keluaran agar mengubah nilai logika true (1) dan false (0) menjadi teks tulisan "true" atau "false" secara otomatis.