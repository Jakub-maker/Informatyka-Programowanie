#include <iostream>
using namespace std;
 
int main() {
    char tekst[21];
    char odwrotny[21];
 
    cout << "Podaj ciag znakow (max 20 znakow): ";
    cin.getline(tekst, 21);
 
    cout << "Wprowadzony ciag to: " << tekst << endl;
 
    int dlugosc = 0;
    while (tekst[dlugosc] != '\0') {
        dlugosc++;
    }
 
    cout << "Dlugosc ciagu: " << dlugosc << endl;
 
    for (int i = 0; i < dlugosc; i++) {
        odwrotny[i] = tekst[dlugosc - 1 - i];
    }
    odwrotny[dlugosc] = '\0';
 
    cout << "Odwrocony ciag: " << odwrotny << endl;
 
    return 0;
}