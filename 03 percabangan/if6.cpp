#include <iostream>
using namespace std;

int main()
{
    int bil ;
    cin>> bil ;
    
    if (bil >= 0){
        if (bil %2 == 0){
            cout<<"Positif Genap";
        }else {
            cout<< "Positif Ganjil";
        }
    }else {
        cout<< "Negatif";
    }
}