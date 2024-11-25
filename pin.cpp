#include <iostream>

using namespace std;


int main() {
    string poprawnyPin = "1234";
    int maxProb = 5;
    int proby = 0;
    string wprowadzonyPin;

    while (proby < maxProb) {
        cout << "-------------------TELEFON-----------------" << endl;
        cout << "Wprowadz PIN: ";
        cin >> wprowadzonyPin;

        if (wprowadzonyPin == poprawnyPin) {
            cout << "Telefon odblokowany!" << endl;
            return 0;
        } else {
            proby++;
            cout << "Niepoprawny kod pin pozostało prob: " << maxProb - proby <<endl;
        }
    }

    cout << "Zbyt wiele niepoprawnych prob. Telefon zablokowany na 15 minut." << endl;
    cout << "Sprobuj ponownie za 15 minut." << endl;

    return 0;
}
