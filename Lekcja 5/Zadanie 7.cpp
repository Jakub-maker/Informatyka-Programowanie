#include <iostream>
using namespace std;
 
int main() {
    int width, height;
    cout << "Podaj szerokosc: ";
    cin >> width;
    cout << "Podaj wysokosc: ";
    cin >> height;
 
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if ((i + j) % 2 == 0) {
                cout << "*";
            } else {
                cout << "+";
            }
        }
        cout << endl;
    }
 
    return 0;
}