#include <iostream>
#include <ctime>

using namespace std;

int main ()
{
  cout << "Witaj! Pomyslalem sobie liczbe 1..100" << endl;
  srand (time (NULL));

  int liczba;
  liczba = rand () % 100 + 1;

  int strzal = -1;
  int ile_prob = 0;

  while (true)
    {
      ile_prob++;

      cout << "Zgadnij jaka (to Twoja " << ile_prob << " proba): ";
      cin >> strzal;

      if (strzal == liczba)
        {
          cout << "Udalo sie! Wygrywasz w " << ile_prob << " probie" << endl;
          return 0;
        }
      else if (strzal < liczba)
        cout << "To za malo" << endl;

      else
        cout << "To za duzo" << endl;
    }

}
