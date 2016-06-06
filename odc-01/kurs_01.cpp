#include <iostream>

using namespace std;

int main ()
{
  int uczniowie;
  int cukierki;
  int x;
  int y;

  cout << "Ilu uczniow jest w Twojej klasie: ";
  cin >> uczniowie;

  cout << "Ile cukierkow kupila mama: ";
  cin >> cukierki;

  x = cukierki / (uczniowie - 1);
  cout << "Cukierkow dla kazdego ucznia: " << x << endl;

  y = cukierki - x * (uczniowie - 1);
  cout << "Dla Jasia na wieczor: " << y << endl;

  return 0;
}
