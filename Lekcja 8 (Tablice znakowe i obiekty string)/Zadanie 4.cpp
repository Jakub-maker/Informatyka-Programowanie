#include <iostream>
using namespace std;
 
int main() {
    char tekst[21];
    char odwrocony[21];
 
    cout << "Podaj ciag znakow (max 20 znakow): ";
    cin.getline(tekst, 21);
 
    int dlugosc = 0;
    while (tekst[dlugosc] != '\0') {
        dlugosc++;
    }
 
    for (int i = 0; i < dlugosc; i++) {
        odwrocony[i] = tekst[dlugosc - 1 - i];
    }
    odwrocony[dlugosc] = '\0';
 
    cout << "Odwrocony ciag: " << odwrocony << endl;
 
    return 0;
}