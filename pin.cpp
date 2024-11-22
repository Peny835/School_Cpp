#include <iostream>
#include <windows.h>

using namespace std;


int main() {
    string poprawnyPin = "1234";
    int maxProb = 5;
    int proby = 0;
    string wprowadzonyPin;

    while (proby < maxProb) {
        cout << "-------------------\033[35mTELEFON\033[0m-----------------" << endl;
        cout << "\033[34mWprowadz PIN: ";
        cin >> wprowadzonyPin;

        if (wprowadzonyPin == poprawnyPin) {
            cout << "\033[32mTelefon odblokowany!\033[0m" << endl;
            return 0;
        } else {
            proby++;
            switch(proby) {
                case 1:
                    cout << "\033[32mNiepoprawny PIN. Pozostalo 4 proby.\033[0m" << endl;
                    break;
                case 2:
                    cout << "\033[33mNiepoprawny PIN. Pozostalo 3 proby.\033[0m" << endl;
                    break;
                case 3:
                    cout << "\033[93mNiepoprawny PIN. Pozostalo 2 proby.\033[0m" << endl;
                    break;
                case 4:
                    cout << "\033[91mNiepoprawny PIN. Pozostala 1 proba.\033[0m" << endl;
                    break;
            }
        }
    }

    cout << "\033[31mZbyt wiele niepoprawnych prob. Telefon zablokowany na 15 minut.\033[0m" << endl;
    cout << "\033[33mSprobuj ponownie za 15 minut.\033[0m" << endl;

    Sleep(900000); // 15 minut

    return 0;
}