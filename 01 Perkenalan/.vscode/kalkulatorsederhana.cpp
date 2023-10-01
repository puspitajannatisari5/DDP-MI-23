#include <iostream>

using namespace std;

int main()
{
    double angka1, angka2, hasil;
    int pilih;

    cout << "Masukkan angka pertama = ";
    cin >> angka1;
    cout << "Masukkan angka kedua = ";
    cin >> angka2;

    cout << endl;

    cout << "Operasi : \n1. Tambah \n2. Kurang \n3. Kali \n4. Bagi \nPilih (1/2/3/4) = ";
    cin >> pilih;

    if (pilih == 1){
        hasil = angka1 + angka2;
        cout << "\nHasil dari " << angka1 << " + " << angka2 << " = " << hasil;
    }else if (pilih == 2){
        hasil = angka1 - angka2;
        cout << "\nHasil dari " << angka1 << " - " << angka2 << " = " << hasil;
    }else if (pilih == 3){
        hasil = angka1 * angka2;
        cout << "\nHasil dari " << angka1 << " x " << angka2 << " = " << hasil;
    }else if (pilih == 4){
        hasil = angka1 / angka2;
        cout << "\nHasil dari " << angka1 << " / " << angka2 << " = " << hasil;
    }else {
        cout << "\nError";
    }
    return 0;
}
