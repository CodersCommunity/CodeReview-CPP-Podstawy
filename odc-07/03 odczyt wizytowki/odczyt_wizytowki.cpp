#include <iostream>
#include <fstream>

using namespace std;

int main ()
{
  fstream plik;
  plik.open ("wizytowka.txt", ios::in);

  if (!plik.good ())
    {
      cout << "Nie mozna otworzyc pliku!";
      return 1;
    }

  string imie;
  getline (plik, imie);

  string nazwisko;
  getline (plik, nazwisko);

  int nr_tel;
  plik >> nr_tel;

  plik.close ();

  cout << "imie: " << imie << "\n";
  cout << "nazwisko: " << nazwisko << "\n";
  cout << "telefon: " << nr_tel << "\n";

  return 0;
}
