#include <cctype> 
#include <iomanip> 
#include <iostream> 
#include <string>

using namespace std;

int main() { const int TARIF_AWAL_MOTOR = 2000; const int TARIF_LANJUT_MOTOR = 1000; const int MAKS_MOTOR = 10000; const int TARIF_AWAL_MOBIL = 5000; const int TARIF_LANJUT_MOBIL = 3000; const int MAKS_MOBIL = 30000;
int jumlah = 0;
std::cout << "=== Parkir Kampus ===\n";
std::cout << "Jumlah kendaraan: ";
cin >> jumlah;

while (cin.fail() || jumlah < 1) {
    cin.clear();
    cin.ignore(1000, '\n');
    std::cout << "Harus bilangan bulat paling sedikit 1. Jumlah kendaraan: ";
    cin >> jumlah;
}
cin.ignore(1000, '\n');

std::cout << fixed << setprecision(2);

int total = 0;
int banyak_motor = 0;
int banyak_mobil = 0;

// // TODO 5a: deklarasikan penampung biaya tertinggi (mulai -1) dan plat pemiliknya.
int tertinggi = -1;
string plat_tertinggi = "";

for (int i = 1; i <= jumlah; i++) {
    string plat;
    char jenis = ' ';
    int durasi = 0;

    std::cout << "\n--- Kendaraan ke-" << i << " dari " << jumlah << " ---\n";

    // TODO 1: baca plat dengan getline sampai sah (tidak kosong dan bukan hanya spasi),
    //         lalu ubah semua hurufnya menjadi huruf besar. Pesan penolakan: "Plat tidak boleh kosong."
    std::cout << "Plat nomor : ";
    getline(cin, plat);

    while (plat.find_first_not_of(" \t") == string::npos) {
        std::cout << "Plat tidak boleh kosong.\n";
        std::cout << "Plat nomor : ";
        getline(cin, plat);
    }

    for (int j = 0; j < static_cast<int>(plat.length()); j++) {
        plat[j] = static_cast<char>(
            toupper(static_cast<unsigned char>(plat[j]))
        );
    }

    //TODO 2: baca jenis (char), jadikan huruf besar, ulangi selama bukan 'M' atau 'R'.
    //         Pesan penolakan: "Hanya M (motor) atau R (roda empat). Jenis (M/R): "
    cout << "Jenis (M/R): ";
    cin >> jenis;

    jenis = static_cast<char>(
        toupper(static_cast<unsigned char>(jenis))
    );

    while (jenis != 'M' && jenis != 'R') {
        cin.ignore(1000, '\n');
        cout << "Hanya M (motor) atau R (roda empat). Jenis (M/R): ";
        cin >> jenis;

        jenis = static_cast<char>(
            toupper(static_cast<unsigned char>(jenis))
        );
    }
    cin.ignore(1000, '\n');

    //TODO 3: baca durasi dengan aman (bilangan bulat 1 sampai 24), pola seperti jumlah di atas.
    //         Pesan penolakan: "Harus bilangan bulat 1 sampai 24. Durasi (jam): "
    cout << "Durasi (jam, 1-24): ";
    cin >> durasi;

    while (cin.fail() || durasi < 1 || durasi > 24) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Harus bilangan bulat 1 sampai 24. Durasi (jam): ";
        cin >> durasi;
    }
    cin.ignore(1000, '\n');

    //TODO 4: hitung biaya dan tentukan nama_jenis ("Motor" atau "Mobil"):
    //         biaya = tarif awal + (durasi - 1) * tarif lanjut, lalu dibatasi tarif maksimum jenisnya.
    //         Tambah banyak_motor atau banyak_mobil.
    int biaya = 0;
    string nama_jenis;

    if (jenis == 'M') {
        nama_jenis = "Motor";
        biaya = TARIF_AWAL_MOTOR
                + (durasi - 1) * TARIF_LANJUT_MOTOR;

        if (biaya > MAKS_MOTOR) {
            biaya = MAKS_MOTOR;
        }

        banyak_motor++;
    } else {
        nama_jenis = "Mobil";
        biaya = TARIF_AWAL_MOBIL
                + (durasi - 1) * TARIF_LANJUT_MOBIL;

        if (biaya > MAKS_MOBIL) {
            biaya = MAKS_MOBIL;
        }

        banyak_mobil++;
    }

    cout << "  " << left << setw(12) << plat << setw(8) << nama_jenis
         << right << setw(4) << durasi << " jam" << setw(9) << biaya << "\n";

    total += biaya;

    //TODO 5b: perbarui biaya tertinggi dan plat pemiliknya bila biaya ini lebih tinggi.
    if (biaya > tertinggi) {
        tertinggi = biaya;
        plat_tertinggi = plat;
    }
}

cout << "\n=== Rekap Hari Ini ===\n";
cout << "Jumlah kendaraan : " << jumlah << "\n";
cout << "Motor            : " << banyak_motor << "\n";
cout << "Mobil            : " << banyak_mobil << "\n";
cout << "Total pendapatan : " << total << "\n";
cout << "Rata-rata biaya  : " << static_cast<double>(total) / jumlah << "\n";

// TODO 5c: cetak "Tertinggi        : " diikuti plat dan biaya tertinggi dalam kurung.
cout << "Tertinggi        : " << plat_tertinggi
     << " (" << tertinggi << ")\n";

cout << "\nSebaran jenis:\n";

// TODO 6: dua baris batang, satu untuk Motor dan satu untuk Mobil, memakai perulangan bersarang:
//         perulangan luar memilih label dan jumlahnya, perulangan dalam mencetak tanda # sebanyak itu.
//         Format tiap baris: label rata kiri selebar 6, lalu "| ", batang, spasi, jumlah. Contoh: "Motor | ## 2"
for (int i = 0; i < 2; i++) {
    string label;
    int banyak;

    if (i == 0) {
        label = "Motor";
        banyak = banyak_motor;
    } else {
        label = "Mobil";
        banyak = banyak_mobil;
    }

    cout << left << setw(6) << label << "| ";

    for (int j = 0; j < banyak; j++) {
        cout << "#";
    }

    cout << " " << banyak << "\n";
}

return 0;
}