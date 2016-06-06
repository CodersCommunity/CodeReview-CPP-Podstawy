#include <iostream>

using namespace std;


int main() {
    string imie;
    cout << "Podaj imie: ";
    cin >> imie;

    int liczba;
    cout << "Podaj dodatnia liczbe calkowita: ";
    cin >> liczba;

    for (int i = 1; i <= liczba; i++) {
        cout << i << ". " << imie << endl;
    }
    return 0;
}
