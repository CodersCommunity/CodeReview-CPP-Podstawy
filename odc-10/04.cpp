#include <iostream>

using namespace std;

float srednia (float &a, float &b, float &c)
{
  return (a + b + c) / 3;
}

int main ()
{
  float a = 1.5f;
  float b = 2.3f;
  float c = 0.75f;

  cout << "Srednia wynosi: " << srednia (a, b, c);

  return 0;
}
