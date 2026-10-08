#include <iostream>
#include <string>

using namespace std;

int main() {
    // 1. Deklarasi konstanta bobot
    const double BOBOT_KEHADIRAN = 0.10;
    const double BOBOT_MINGGUAN  = 0.45;
    const double BOBOT_UTS       = 0.25;
    const double BOBOT_UAS       = 0.20;

    string nama, npm;
    double kehadiran = 0, mingguan = 0, uts = 0, uas = 0;

    cout << "=== SiNilai v0.2 ===\n";
    cout << "Nama      : ";
    getline(cin, nama);
    cout << "NPM       : ";
    cin >> npm;
    cout << "Kehadiran : ";
    cin >> kehadiran;
    cout << "Mingguan  : ";
    cin >> mingguan;
    cout << "UTS       : ";
    cin >> uts;
    cout << "UAS       : ";
    cin >> uas;

    // 2. Hitung Nilai Akhir (Berbobot)
    double nilai_akhir = (kehadiran * BOBOT_KEHADIRAN) +
                         (mingguan * BOBOT_MINGGUAN) +
                         (uts * BOBOT_UTS) +
                         (uas * BOBOT_UAS);

    // 3. Hitung Rerata Polos (Sederhana)
    double rerata_polos = (kehadiran + mingguan + uts + uas) / 4.0;

    // 4. Hitung Selisih
    double selisih = nilai_akhir - rerata_polos;

    // 5. Tampilkan Hasil
    cout << "\n--- Kartu Nilai Mahasiswa ---\n";
    cout << "Nama         : " << nama << "\n";
    cout << "NPM          : " << npm << "\n";
    cout << "Nilai Akhir  : " << nilai_akhir << "\n";
    cout << "Rerata Polos : " << rerata_polos << "\n";
    cout << "Selisih      : " << selisih << "\n";

    return 0;
}