#include <iostream>
#include <chrono>

using namespace std;

int main ()
{
  cout << "Ile liczb w tablicy: ";
  int ile;
  cin >> ile;

  //dynamiczna alokacja tablicy
  int *tablica = new int[ile];

  //zacznij odliczac czas
  auto start = chrono::high_resolution_clock::now ();
  //wczytywanie liczb do tablicy
  for (int i = 0; i < ile; i++)
    {
      tablica[i] = i;
      tablica[i] += 50;
    }
  auto stop = chrono::high_resolution_clock::now ();

  double czas = chrono::duration_cast<chrono::milliseconds> (stop - start).count ();
  cout << "Czas zapisu (bez wskaznika): " << czas << " ms" << "\n";

  delete[] tablica;

  //ponowna alokacja tablicy
  tablica = new int[ile];
  int *wskaznik = tablica;

  //zacznij odliczac czas
  start = chrono::high_resolution_clock::now ();
  //wczytywanie liczb do tablicy
  for (int i = 0; i < ile; i++)
    {
      *wskaznik = i;
      *wskaznik += 50;
      wskaznik++;
    }
  stop = chrono::high_resolution_clock::now ();
  czas = chrono::duration_cast<chrono::milliseconds> (stop - start).count ();
  cout << "Czas zapisu (ze wskaznikiem): " << czas << " ms";

  delete[] tablica;

  return 0;
}
