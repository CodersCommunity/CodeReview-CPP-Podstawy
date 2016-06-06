#include <iostream>

using namespace std;

int main ()
{
  cout << "Podaj numer miesiaca: ";
  int nr_miesiaca;

  if (!(cin >> nr_miesiaca))
    {
      cerr << "To nie jest liczba!";
      return 0;
    }

  switch (nr_miesiaca)
    {
      case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
      case 12:
        cout << "Ten miesiac ma 31 dni!\n";
      break;

      case 4:
      case 6:
      case 9:
      case 11:
        cout << "Ten miesiac ma 30 dni!\n";
      break;

      case 2:
        int rok;
      cout << "Podaj rok: ";
      cin >> rok;

      if (rok % 4 == 0 && rok % 100 != 0 || rok % 400 == 0)
        cout << "Ten miesiac ma 29 dni!\n";
      else
        cout << "Ten miesiac ma 28 dni!\n";

      break;

      default:
        cout << "Niepoprawny numer miesiaca!\n";
    }

  return 0;
}
