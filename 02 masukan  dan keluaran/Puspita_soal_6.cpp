#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    double banyakpermen = x / y;
    double sisapermen = x % y;
    cout << "masing-masing " << banyakpermen << endl;
    cout << "bersisa " << sisapermen << endl;
    return 0;
}
    
    
