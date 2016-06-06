#include <iostream>

using namespace std;

float ile_cali (float m)
{
  return m * 39.37f;
}

float ile_jardow (float x);

void ile_mil (float m)
{
  cout << "na mile: " << m * 0.0006213f << "\n";
}

int main ()
{
  float metry;
  cout << "Podaj ile metrow: ";
  cin >> metry;

  cout << "na cale: " << ile_cali (metry) << "\n";
  cout << "na jardy: " << ile_jardow (metry) << "\n";
  ile_mil (metry);

  return 0;
}

float ile_jardow (float x)
{
  return (float) (x * 1.0936);
}
