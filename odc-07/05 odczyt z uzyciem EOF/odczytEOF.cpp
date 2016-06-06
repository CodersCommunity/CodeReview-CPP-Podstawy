#include <iostream>
#include <fstream>

using namespace std;


int main() {
    fstream plik;
    plik.open("pomiary.txt", ios::in);

    if (!plik.good()) {
        cout << "Nie mozna otworzyc pliku!\n";
        return 1;
    }

    int licznik = 0;
    float liczba;
    while (!plik.eof()) {
        plik >> liczba;
        cout << "Pomiar [" << licznik << "] " << liczba << endl;
        licznik++;
    }

    plik.close();

    cout << "Ilosc pomiarow: " << licznik << endl;

    return 0;
}
