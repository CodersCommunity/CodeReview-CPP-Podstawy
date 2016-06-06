#include <iostream>

using namespace std;

int main ()
{
  char wybor = 'e';
  while (true)
    {
      float x;
      cout << "Podaj 1 liczbe: ";
      cin >> x;

      float y;
      cout << "Podaj 2 liczbe: ";
      cin >> y;

      cout << "\n";
      cout << "MENU GLOWNE" << "\n";
      cout << "-----------------" << "\n";
      cout << "1. Dodawanie" << "\n";
      cout << "2. Odejmowanie" << "\n";
      cout << "3. Mnozenie" << "\n";
      cout << "4. Dzielenie" << "\n";
      cout << "5. Koniec programu" << "\n";
      cout << "\n";

      cin >> wybor;
      switch (wybor)
        {
          case '1':
            cout << "Suma = " << x + y << "\n";
          break;

          case '2':
            cout << "Roznica = " << x - y << "\n";
          break;

          case '3':
            cout << "Iloczyn = " << x * y << "\n";
          break;

          case '4':
            if (y == 0)
              cout << "Nie dzielimy przez zero!\n";
            else
              cout << "Iloraz = " << x / y << "\n";
          break;

          case '5':
            return 0;

          default:
            cout << "Nie ma takiej opcji w menu!\n";
        }
    }

}
