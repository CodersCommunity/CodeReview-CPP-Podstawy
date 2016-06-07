#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
  float liczba;
  cout << "Podaj liczbe: ";
  cin >> liczba;


  cout << "Round: " << round (liczba) << "\n";
  cout << "Ceil: " << ceil (liczba) << "\n";
  cout << "Floor: " << floor (liczba) << "\n";
  cout << "Trunc: " << trunc (liczba) << "\n";
  return 0;
}
