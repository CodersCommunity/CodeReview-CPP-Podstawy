#include <iostream>

using namespace std;

int main ()
{
  int ile;
  cin >> ile;

  int v1;
  int v2;
  for (int i = 0; i < ile; ++i)
    {
      cin >> v1 >> v2;
      cout << 2 * v1 * v2 / (v1 + v2) << endl;
    }

  return 0;
}
