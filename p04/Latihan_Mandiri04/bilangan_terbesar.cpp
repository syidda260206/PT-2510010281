#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "Masukkan tiga bilangan (dipisah spasi): ";
    cin >> a >> b >> c;

    if (a >= b && a >= c) {
        cout << "Bilangan terbesar: " << a << endl;
    } else if (b >= c) {
        cout << "Bilangan terbesar: " << b << endl;
    } else {
        cout << "Bilangan terbesar: " <<  c << endl;
    }

    return 0;
}