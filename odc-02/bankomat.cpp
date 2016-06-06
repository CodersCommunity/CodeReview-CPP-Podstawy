#include <iostream>

using namespace std;

int main ()
{
  string PIN;
  cout << "Witaj w naszym banku!" << endl;
  cout << "Podaj numer PIN:";
  cin >> PIN;

  if (PIN == "1729")
    {
      cout << "Poprawny PIN" << endl;
    }
  else
    {
      cout << "Niepoprawny PIN" << endl;
    }
  return 0;
}
