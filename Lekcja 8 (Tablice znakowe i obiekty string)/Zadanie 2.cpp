#include <iostream>
using namespace std;
 
int main() {
    char tekst[21];
    cout << "Podaj ciag znakow (max 20 znakow): ";
    cin.getline(tekst, 21);
 
    cout << "Wprowadzony ciag: " << tekst << endl;
 
    
    int i = 0;
    while (tekst[i] != '\0') {
        if (tekst[i] == 'a') {
            tekst[i] = 'o';
        }
        i++;
    }
    cout << "Po zamianie 'a' na 'o': " << tekst << endl;
 
    	i = 0;
    while (tekst[i] != '\0') {
        if (tekst[i] >= 'a' && tekst[i] <= 'z') {
            tekst[i] = tekst[i] - ('a' - 'A');
        }
        i++;
    }
    cout << "Po zamianie wszystkich na duze litery: " << tekst << endl;
 
 	char bezSpacji[21];
    int j = 0;
    i = 0;
    while (tekst[i] != '\0') {
        if (tekst[i] != ' ') {
            bezSpacji[j] = tekst[i];
            j++;
        }
        i++;
    }
    bezSpacji[j] = '\0';
 
    cout << "Ciag bez spacji: " << bezSpacji << endl;
 
    return 0;
}