#include <iostream>
#include <windows.h>
#include <algorithm>
using namespace std;

int liczba[3];


int main() {
    cout << " Porownać trzy rozne liczby a, b, c, nastepnie wypisac je w kolejnosci rosnacej." << endl;
    Sleep(500);

    cout << "Podaj liczby: " << endl;
    cin >> liczba[0]>>liczba[1]>>liczba[2];
    cout << "sortowanie od najmniejszej do najwiekszej" << endl;
    sort(liczba, liczba + 3);
    for(int i=0; i<3; i++)
    {
        cout << liczba[i] << endl;
    }
}
