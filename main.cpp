#include <iostream>
#include <windows.h>
using namespace std;

int liczba[3];


int main() {
    cout << " Porownać trzy rozne liczby a, b, c, nastepnie wypisac je w kolejnosci rosnacej." << endl;
    Sleep(500);

    cout << "Podaj liczby: " << endl;
    cin >> liczba[1]>>liczba[2]>>liczba[3];
    cout << "sortowanie od najmniejszej do najwiekszej" << endl;
    for(int i=liczba[10]; i<3; i++)
        cout << liczba[i] << '\n';
}
