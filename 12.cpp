#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>

using namespace std;

string decimalToHexadecimal(int n) {
    stringstream ss;
    ss << hex << n;
    return ss.str();
}

int main() {
    int decimalNum;
    cout << "Ingrese un numero decimal: ";
    cin >> decimalNum;

    string hexadecimalNum = decimalToHexadecimal(decimalNum);

    cout << "El numero hexadecimal equivalente es: " << hexadecimalNum << endl;

    return 0;
}

