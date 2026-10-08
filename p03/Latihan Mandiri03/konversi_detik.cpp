#include <iostream>
using namespace std;

int main() {
    int total_detik;
    cout << "Masukkan jumlah detik: ";
    cin >> total_detik;

    int jam = total_detik / 3600;
    int sisa_detik = total_detik % 3600;
    int menit = sisa_detik / 60;
    int detik = sisa_detik % 60;

    cout << total_detik << " detik = " 
         << jam << " jam, " 
         << menit << " menit, " 
         << detik << " detik." << endl;

    return 0;
}