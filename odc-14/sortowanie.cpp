#include <iostream>
#include <chrono>
using namespace std;

void sortowanie_babelkowe (int *tab, int n)
{
  for (int i = 1; i < n; i++)
    {
      for (int j = n - 1; j >= 1; j--)
        {
          if (tab[j] < tab[j - 1])
            {
              int bufor;
              bufor = tab[j - 1];
              tab[j - 1] = tab[j];
              tab[j] = bufor;
            }
        }
    }
}

void quicksort (int *tablica, int lewy, int prawy)
{
  int v = tablica[(lewy + prawy) / 2];
  int i, j, x;
  i = lewy;
  j = prawy;
  do
    {
      while (tablica[i] < v)
        i++;
      while (tablica[j] > v)
        j--;

      if (i <= j)
        {
          x = tablica[i];
          tablica[i] = tablica[j];
          tablica[j] = x;
          i++;
          j--;
        }
    }
  while (i <= j);

  if (j > lewy)
    quicksort (tablica, lewy, j);
  if (i < prawy)
    quicksort (tablica, i, prawy);
}

int main ()
{
  //inicjowanie generatora
  srand (time (NULL));

  cout << "Porownanie czasow sortowania v.1" << "\n";
  cout << "Ile losowych liczb w tablicy: ";
  int ile;
  cin >> ile;

  //dynamiczna alokacja tablicy
  int *tablica;
  tablica = new int[ile];

  int *tablica2;
  tablica2 = new int[ile];



  //wczytywanie losowych liczb do tablicy
  for (int i = 0; i < ile; i++)
    tablica[i] = rand () % 100000 + 1;

  //przepisanie tablicy do tablicy2
  for (int i = 0; i < ile; i++)
    tablica2[i] = tablica[i];


  // Sortwanie bąbelkowe
  cout << "Sortuje teraz babelkowo. Prosze czekac!" << "\n";
  auto start = chrono::high_resolution_clock::now ();
  sortowanie_babelkowe (tablica, ile);
  auto stop = chrono::high_resolution_clock::now ();

  double czas = chrono::duration_cast<chrono::milliseconds> (stop - start).count ();
  cout << "\n" << "Czas sortowania babelkowego: " << czas << " ms" << "\n";

  // Sortowanie QuickSort
  cout << "\n" << "Sortuje teraz algorytmem quicksort. Prosze czekac!" << "\n";
  start = chrono::high_resolution_clock::now ();
  quicksort (tablica2, 0, ile - 1);
  stop = chrono::high_resolution_clock::now ();

  czas = chrono::duration_cast<chrono::milliseconds> (stop - start).count ();
  cout << "\n" << "Czas sortowania quicksort: " << czas << " ms" << "\n";

  delete[] tablica;
  delete[] tablica2;

  return 0;
}
