#include <iostream>
 
using namespace std;
 
int main() {
    const int ROZMIAR = 5;
    int tablica[ROZMIAR];
 
    cout << "Podaj 5 liczb calkowitych:\n";
    for (int i = 0; i < ROZMIAR; i++) {
        cin >> tablica[i];
    }
 
    int najmniejsza = tablica[0];
    for (int i = 1; i < ROZMIAR; i++) {
        if (tablica[i] < najmniejsza) {
            najmniejsza = tablica[i];
        }
    }
 
    cout << "Najmniejsza liczba to: " << najmniejsza << endl;
 
    return 0;
}