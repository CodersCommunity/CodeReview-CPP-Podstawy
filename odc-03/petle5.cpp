#include <iostream>

using namespace std;

int main() {
    int populacja = 1;
    int godzin = 0;
    while (populacja <= 1000000000) {
        godzin++;
        populacja *= 2;

        cout << "Minelo godzin: " << godzin;
        cout << " liczba bakterii: " << populacja << "\n";
    }
    return 0;
}
