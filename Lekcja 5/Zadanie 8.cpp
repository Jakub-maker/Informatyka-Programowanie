#include <iostream>
using namespace std;
 
int main() {
    int width, height;
    cout << "Podaj szerokosc podstawy: ";
    cin >> width;
    cout << "Podaj wysokosc: ";
    cin >> height;
 
    for (int i = 0; i < height; i++) {
    	
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        
        for (int k = 0; k < width - 2 * i; k++) {
            cout << "*";
        }
        cout << endl;
    }
 
    return 0;
}