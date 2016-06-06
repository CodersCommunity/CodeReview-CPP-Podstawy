#include <iostream>
#include <ctime>

using namespace std;

int main ()
{
  cout << "Ile liczb w tablicy: ";
  int ile;
  cin >> ile;

  //dynamiczna alokacja tablicy
  int *tablica = new int[ile];

  //zacznij odliczac czas
  clock_t stop;
  clock_t start = clock ();
  //wczytywanie liczb do tablicy
  for (int i = 0; i < ile; i++)
    {
      tablica[i] = i;
      tablica[i] += 50;
    }
  stop = clock ();
  double czas = (double) (stop - start) / CLOCKS_PER_SEC;
  cout << "Czas zapisu (bez wskaznika): " << czas << " s" << endl;

  delete[] tablica;

  //ponowna alokacja tablicy
  tablica = new int[ile];
  int *wskaznik = tablica;

  //zacznij odliczac czas
  start = clock ();
  //wczytywanie liczb do tablicy
  for (int i = 0; i < ile; i++)
    {
      *wskaznik = i;
      *wskaznik += 50;
      wskaznik++;
    }
  stop = clock ();
  czas = (double) (stop - start) / CLOCKS_PER_SEC;
  cout << "Czas zapisu (ze wskaznikiem): " << czas << " s";

  delete[] tablica;

  return 0;
}
