#include <iostream>

using namespace std;

int main ()
{
  float x, y;

  cout << "Podaj 1 liczbe: ";
  cin >> x;

  cout << "Podaj 2 liczbe: ";
  cin >> y;

  cout << "\n";
  cout << "MENU GLOWNE" << "\n";
  cout << "-----------------" << "\n";
  cout << "1. Dodawanie" << "\n";
  cout << "2. Odejmowanie" << "\n";
  cout << "3. Mnozenie" << "\n";
  cout << "4. Dzielenie" << "\n";

  int wybor;
  cout << "Wybierz: ";
  cin >> wybor;

  if (wybor == 1)
    cout << "Suma = " << x + y << "\n";

  else if (wybor == 2)
    cout << "Roznica = " << x - y << "\n";

  else if (wybor == 3)
    cout << "Iloczyn = " << x * y << "\n";

  else if (wybor == 4)
    {
      if (y == 0)
        cout << "Nie dzielimy przez zero!" << "\n";
      else
        cout << "Iloraz = " << x / y << "\n";
    }
  else
    cout << "Nie ma takiej opcji w menu!" << "\n";

  return 0;
}
