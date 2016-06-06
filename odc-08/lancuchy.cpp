#include <iostream>
#include <algorithm>

using namespace std;

int main ()
{
  char napis[20] = "Ala ma kota";
  cout << napis << "\n";

  //spowoduje blad:
  //napis="kot";
  //cout << napis<<"\n";

  //nie spowoduje bledu:
  char *napis2 = (char *) "Ala ma kota";
  cout << napis2 << "\n";
  napis2 = (char *) "Inny napis";
  cout << napis2 << "\n";

  //pokaz konkretny znak:
  cout << napis[0] << "\n";

  //sprawdz plec uzytkownika:
  string imie;
  cout << "Podaj imie: ";
  cin >> imie;

  unsigned long dlugosc_imienia = imie.length ();
  cout << "Dlugosc: " << dlugosc_imienia << "\n";

  if (imie[dlugosc_imienia - 1] == 'a')
    cout << "Wydaje mi sie, ze jestes kobieta" << "\n";
  else
    cout << "Wydaje mi sie, ze jestes facetem" << "\n";

  //odwracanie wyrazow:
  string wyraz;
  cout << "Podaj wyraz do odwrocenia (bez spacji): ";
  cin >> wyraz;

  int dlugosc = (int) (wyraz.length () - 1);
  for (int i = dlugosc; i >= 0; i--)
    {
      cout << wyraz[i];
    }


  //uzycie getline - zapis ze spacjami:
  string napis3;
  cout << "\n" << "Podaj wyraz ze spacjami: ";
  cin.ignore (); //"wyczysc" strumien
  getline (cin, napis3);
  cout << napis3 << "\n";

  //wyznacz dlugosc napisu i wyswietl na ekranie:
  unsigned long dlugosc2 = napis3.length ();
  cout << dlugosc2 << "\n";

  // laczenie dwoch stringow:
  string jeden = "Ala ma";
  string dwa = " kota";
  string trzy = jeden + dwa;
  cout << trzy << "\n";

  //Zmiana wielkosci liter:
  string napis4 = "Ala ma kota";

  transform (napis4.begin (), napis4.end (), napis4.begin (), ::tolower);
  cout << napis4 << "\n";

  transform (napis4.begin (), napis4.end (), napis4.begin (), ::toupper);
  cout << napis4 << "\n";


  //Znajdz fraze:
  string napis5 = "Ala ma kota";
  string szukaj = "kot";
  size_t pozycja = napis5.find (szukaj);

  if (pozycja != string::npos)
    cout << "znaleziono na pozycji: " << pozycja << "\n";
  else
    cout << "nie znaleziono" << "\n";

  //Wykasuj czesc lancucha:
  string napis6 = "Ala ma kota";
  napis6.erase (3, 3);
  cout << napis6 << "\n";

  //Zastap czesc lancucha:
  string napis7 = "Ala ma kota";
  napis7.replace (4, 2, "nie ma");
  cout << napis7 << "\n";

  //Wstaw do lancucha:
  string napis8 = "Ala ma kota";
  napis8.insert (11, " Filemona");
  cout << napis8 << "\n";

  //Wyciagnij czesc napisu do nowego lancucha:
  string napis9 = "Ala ma kota";
  string nowynapis = napis9.substr (4, 7);
  cout << nowynapis;

  return 0;
}
