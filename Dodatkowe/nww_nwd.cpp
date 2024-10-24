#include <iostream>
#include <limits>
using namespace std;

int nwd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int nww(int a, int b) {
    return (a * b) / nwd(a, b);
}

bool isValidInput() {
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return false;
    }
    return true;
}

int main() {
    int a, b;

    cout << "Podaj pierwsza liczbe: ";
    cin >> a;
    while (!isValidInput() || a <= 0) {
        cout << "Blad: podaj poprawna dodatnia liczbe calkowita!" << endl;
        cout << "Podaj pierwsza liczbe: ";
        cin >> a;
    }

    cout << "Podaj druga liczbe: ";
    cin >> b;
    while (!isValidInput() || b <= 0) {
        cout << "Blad: podaj poprawna dodatnia liczbe calkowita!" << endl;
        cout << "Podaj druga liczbe: ";
        cin >> b;
    }

    cout << "NWD(" << a << ", " << b << ") = " << nwd(a, b) << endl;
    cout << "NWW(" << a << ", " << b << ") = " << nww(a, b) << endl;

    return 0;
}
