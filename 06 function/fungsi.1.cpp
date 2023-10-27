#include <iostream>
using namespace std;

void myFunction () {
    cout << " I just got executed!" << endl;
}
void myFunction2(string name = "puspi", int Umur = 18) {
    cout << "Nama saya : " << name << " Umur saya : " << Umur <<  endl;
}

int myFunction3(int x){
    return 5 + x;
}

int main () {
    myFunction ();
    myFunction ();
    myFunction ();

    myFunction2("puspi");
    myFunction2("Andi", 12);
    myFunction2("Budi", 15);
    myFunction2("charlie", 19);

    cout << myFunction3(17) << endl;
    cout << myFunction3(20) << endl;
    cout << myFunction3(26) << endl;

    int value1 = myFunction3(18);
    cout << value1 << endl;

    return 0;
}