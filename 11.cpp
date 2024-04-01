#include <iostream>
#include <vector>

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
    cout << "Ingrese un número decimal: ";
    cin >> decimalNum;

    vector<int> binaryNum = decimalToBinary(decimalNum);

    cout << "El número binario equivalente es: ";
    for (int i = binaryNum.size() - 1; i >= 0; i--) {
        cout << binaryNum[i];
    }

    return 0;
}

