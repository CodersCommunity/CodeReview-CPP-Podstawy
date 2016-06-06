#include <iostream>

using namespace std;

int main ()
{
  int populacja = 1;
  int godzin = 0;
  do
    {
      godzin++;
      populacja *= 2;

      cout << "Minelo godzin: " << godzin;
      cout << " liczba bakterii: " << populacja << "\n";
    }
  while (populacja <= 1000000000);

  return 0;
}
