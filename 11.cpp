#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

vector<int> decimalToBinary(int n) {
    vector<int> binaryNum;

    while (n > 0) {
        binaryNum.push_back(n % 2);
        n = n / 2;
    }

    return binaryNum;
}

int main() {
    int decimalNum;
    cout << "Ingrese un numero decimal: ";
    cin >> decimalNum;

    vector<int> binaryNum = decimalToBinary(decimalNum);

    cout << "El numero binario equivalente es: ";
    for (int i = binaryNum.size() - 1; i >= 0; i--) {
        cout << binaryNum[i];
    }

    return 0;
}

