#include <iostream>
#include <cmath>

using namespace std;


int main() {

    cout << "Podaj liczbe: ";
    cin >> liczba;
    float liczba;

    cout << "Round: " << round(liczba) << endl;
    cout << "Ceil: " << ceil(liczba) << endl;
    cout << "Floor: " << floor(liczba) << endl;
    cout << "Trunc: " << trunc(liczba) << endl;
    return 0;
}
