#include <iostream>

using namespace std;

int main ()
{
  string login;
  cout << "Podaj login: ";
  cin >> login;

  string haslo;
  cout << "Podaj haslo: ";
  cin >> haslo;

  if (login == "admin" && haslo == "szarlotka")
    cout << "Udalo sie zalogowac!\n";
  else
    cout << "nie udalo sie zalogowac!\n";

  return 0;
}
