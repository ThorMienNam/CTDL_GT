#include <iostream>
using namespace std;

// Convert Decimal to Binary
void convertToBinary(int n) {
    if (n > 1) {
        convertToBinary(n / 2);
    }
    
    cout << n % 2;
}

int main() {
    int number;

    cout << "decimal: ";cin >> number;
    cout << "Binary: ";
    if (number == 0) {
        cout << 0; 
    } else {
        convertToBinary(number); 
    }
    cout << endl;
    return 0;
}