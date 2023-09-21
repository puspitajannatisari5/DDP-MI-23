#include <iostream>
using namespace std;


int main() {
    string bangku[12];
    
    cin >> bangku[0] >> bangku[1] >> bangku[2];
    cin >> bangku[3] >> bangku[4] >> bangku[5];
    cin >> bangku[6] >> bangku[7] >> bangku[8];
    cin >> bangku[9] >> bangku[10] >> bangku[11];
    
    cout << bangku[0] << " " << bangku[3] << " " << bangku[6] << " " << bangku[9] << endl;
    cout << bangku[1] << " " << bangku[4] << " " << bangku[7] << " " << bangku[10] << endl;
    cout << bangku[2] << " " << bangku[5] << " " << bangku[8] << " " << bangku[11] << endl;
}