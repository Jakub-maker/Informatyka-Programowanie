#include <iostream>
using namespace std;
 
int main() {
    char tekst[21];
    cout << "Podaj ciag znakow (max 20 znakow): ";
    cin.getline(tekst, 21);
    
    int licznik = 0;
    int i = 0;
    while (tekst[i] != '\0') {
        if (tekst[i] == 'a') {
            licznik++;
        }
        i++;
    }
    
    cout << "Znak 'a' wystepuje " << licznik << " razy." << endl;
    
    return 0;
}