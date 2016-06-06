#include <iostream>
#include <fstream>

using namespace std;

int main ()
{
  cout << "Podaj imie: ";
  string imie;
  cin >> imie;

  cout << "Podaj nazwisko: ";
  string nazwisko;
  cin >> nazwisko;

  cout << "Podaj nr telefonu: ";
  int nr_tel;
  cin >> nr_tel;

  fstream plik;
  plik.open ("wizytowka.txt", ios::out | ios::trunc);

  plik << imie << endl;
  plik << nazwisko << endl;
  plik << nr_tel << endl;

  plik.close ();

  return 0;
}
