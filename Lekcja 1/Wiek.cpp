#include <iostream>
#include <string>
using namespace std;

int main() {
	string imie;
	int wiek;
	
	cout <<"Podaj swoje imie: " ;
	cin >> imie;
	
	cout <<"Podaj swoj wiek: " ;
	cin >> wiek;
	
	cout << "Witaj, " << imie << "! Masz " << wiek << " lat." << endl;
	
	return 0;
}