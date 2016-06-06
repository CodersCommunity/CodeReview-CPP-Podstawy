#include <iostream>

using namespace std;

int main ()
{
  cout << "Ile liczb w tablicy: ";
  int ile;
  cin >> ile;

  //dynamiczna alokacja tablicy
  int *tablica = new int[ile];

  //pokaz kolejne adresy komorek w tablicy
  for (int i = 0; i < ile; i++)
    {
      cout << i  << " - " << (tablica + i) << "\n";
    }

  delete[] tablica;

  return 0;
}
