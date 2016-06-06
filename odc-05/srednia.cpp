#include <iostream>

using namespace std;

int main() {
    float suma = 0;
    float ocena;
    for (int i = 0; i < 5; i++) {
        cout << "Podaj " << i + 1 << " ocene: ";
        cin >> ocena;
        suma += ocena;
    }

    float srednia = suma / 5;
    cout << "srednia = " << srednia << "\n";

    return 0;
}
