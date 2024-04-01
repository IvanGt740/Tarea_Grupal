#include <iostream>
#include <Windows.h>
#include <cstdlib> 

using namespace std;


void clearScreen() {
    system("cls");
}

int main() {
    
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    
    int x = 0, y = 0;

    
    while (true) {
       
        clearScreen();

        
        SetConsoleCursorPosition(hConsole, { (SHORT)x, (SHORT)y });

     
        cout << "X";

      
        x++;
        y++;

        
        Sleep(100);
    }

    return 0;
}

