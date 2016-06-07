#include <iostream>

using namespace std;

float srednia (float *tab, int ile)
{
  float suma = 0;
  for (int i = 0; i < ile; i++)
    {
      suma += *tab;
      *tab = 999;
      tab++;
    }
  return suma / ile;
}

int main ()
{
  float tablica[3] = {
      1.5f, 2.3f, 0.75f
  };

  cout << "Srednia wynosi: " << srednia (tablica, 3) << "\n";

  cout << tablica[0] << "\n";
  cout << tablica[1] << "\n";
  cout << tablica[2] << "\n";

  return 0;
}
