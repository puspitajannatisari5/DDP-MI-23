#include <iostream>
using namespace std;

int main () {
    char ulangi = 'y';
    int counter = 0;

    do{
        cout << "Apakah kamu sayang aku?" << endl;
        cout << "jawab (y/t): ";
        cin >> ulangi;

        counter++;
    }while (ulangi == 'y');

    cout << "\n\n----------------------\n" ;
    cout << "Anda kurang beruntung" << endl;
    cout << " kamu berusaha sebanyak " << counter << " kali"<<
    endl;;
}