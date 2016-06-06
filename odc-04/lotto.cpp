#include <iostream>
#include <thread>

using namespace std;

int main ()
{
  srand (time (NULL));
  int liczba;

  cout << "Witaj w losowaniu! Za 3 sekundy nastapi zwolnienie blokady\n";
  this_thread::sleep_for (chrono::milliseconds (3000));

  for (int i = 1; i <= 6; i++)
    {
      liczba = rand () % 49 + 1;
      this_thread::sleep_for (chrono::milliseconds (1000));
      cout << liczba << "\a" << endl;
    }

  return 0;
}
