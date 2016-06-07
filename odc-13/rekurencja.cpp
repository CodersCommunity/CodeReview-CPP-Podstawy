#include <iostream>

using namespace std;

int f (int n)
{
  if (n == 0)
    return 3;
  else
    return f (n - 1) + 2;
}

long int potega (int p, int w)
{
  if (w == 0)
    return 1;
  else
    return p * potega (p, w - 1);
}

long int fib (int n)
{
  if (n == 1 || n == 2)
    return 1;
  else
    return fib (n - 1) + fib (n - 2);
}

long int silnia (int n)
{
  if (n == 0)
    return 1;
  else
    return n * silnia (n - 1);
}

int main ()
{
  cout << f (3) << "\n";
  cout << potega (3, 4) << "\n";
  cout << fib (6) << "\n";
  cout << silnia (6) << "\n";

  return 0;
}
