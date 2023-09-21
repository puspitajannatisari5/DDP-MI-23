#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int tambah = x + y;
    int kurang = x - y;
    int kali = x * y;
    double bagi = (double) x / y;

    cout << "Hasil dari Penjumlahan " << x << " dengan " << y << " adalah " << tambah << endl;
    cout << "Hasil dari Pengurangan " << x << " dengan " << y << " adalah " << kurang << endl;
    cout << "Hasil dari Perkalian " << x << " dengan " << y << " adalah " << kali << endl;
    cout << "Hasil dari Pembagian " << x << " dengan " << y << " adalah " << bagi << endl;
}