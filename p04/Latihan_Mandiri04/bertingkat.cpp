#include<iostream>
using namespace std;

int main() {

    double nilai = 0;
    cout << "Nilai akhir: ";
    cin >> nilai;

    if (nilai >= 80) {
    cout << "Huruf mutu: A\n";
    } else if (nilai >= 70) {
    cout << "Huruf mutu: B\n";
    } else if (nilai >= 60) {
    cout << "Huruf mutu: C\n";
    } else {
    cout << "Huruf mutu: D\n";
    }
    return 0;
}