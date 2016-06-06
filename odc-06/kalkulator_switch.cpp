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

      cout << endl;
      cout << "MENU GLOWNE" << endl;
      cout << "-----------------" << endl;
      cout << "1. Dodawanie" << endl;
      cout << "2. Odejmowanie" << endl;
      cout << "3. Mnozenie" << endl;
      cout << "4. Dzielenie" << endl;
      cout << "5. Koniec programu" << endl;
      cout << endl;

      cin >> wybor;
      switch (wybor)
        {
          case '1':
            cout << "Suma = " << x + y << endl;
          break;

          case '2':
            cout << "Roznica = " << x - y << endl;
          break;

          case '3':
            cout << "Iloczyn = " << x * y << endl;
          break;

          case '4':
            if (y == 0)
              cout << "Nie dzielimy przez zero!\n";
            else
              cout << "Iloraz = " << x / y << endl;
          break;

          case '5':
            return 0;

          default:
            cout << "Nie ma takiej opcji w menu!\n";
        }
    }

}
