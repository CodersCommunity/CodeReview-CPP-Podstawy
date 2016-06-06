#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int main ()
{
  int nr_linii = 1;
  string linia;
  int nr_pytania = 0;

  fstream plik;
  plik.open ("quiz.txt", ios::in);

  if (!plik.good ())
    {
      cout << "Nie udalo sie otworzyc pliku!";
      return 0;
    }

  // wczytywanie tematu i nicku
  string temat;
  getline (plik, temat);

  string nick;
  getline (plik, nick);


  // przygotowanie do wczytania
  string tresc[5];
  string odpA[5], odpB[5], odpC[5], odpD[5]; // wyjatkowo wybaczam, chociaz lepiej byloby to zrobic na tablicy 2d
  string poprawna[5];
  string odpowiedz;

  for (int i = 0; i < 5; ++i)
    {
      getline (plik, tresc[i]);
      getline (plik, odpA[i]);
      getline (plik, odpB[i]);
      getline (plik, odpC[i]);
      getline (plik, odpD[i]);

      getline (plik, poprawna[i]);
    }
  plik.close ();


  // quiz
  int punkty = 0;
  for (int i = 0; i <= 4; i++)
    {
      cout << "\n" << tresc[i] << "\n";
      cout << "A. " << odpA[i] << "\n";
      cout << "B. " << odpB[i] << "\n";
      cout << "C. " << odpC[i] << "\n";
      cout << "D. " << odpD[i] << "\n";

      cout << "Twoja odpowiedz: ";
      cin >> odpowiedz;

      transform (odpowiedz.begin (), odpowiedz.end (), odpowiedz.begin (), ::tolower);

      if (odpowiedz == poprawna[i])
        {
          cout << "Dobrze! Zdobywasz punkt!" << "\n";
          punkty++;
        }
      else
        cout << "Zle! Brak punktu! Poprawna odpowiedz: " << poprawna[i] << "\n";

    }

  cout << "Koniec quizu. Zdobyte punkty: " << punkty << "\n";

  return 0;
}
