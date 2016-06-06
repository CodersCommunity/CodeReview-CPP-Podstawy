#include <iostream>
#include <thread>
#ifdef __WIN32
#include <windows.h>
#endif
using namespace std;

void wyswietl_stos (int &rozmiar, int dane[])
{
#ifdef __WIN32
  system ("CLS");
  SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), 14);
#endif

  cout << "\n";
  cout << "----------------\n";
  cout << "ZAWARTOSC STOSU:\n";
  cout << "----------------\n";

  for (int i = rozmiar; i >= 1; i--)
    cout << dane[i] << "\n";

  if (rozmiar == 0) cout << "pusty\n";

  cout << "----------------\n\n";
#ifdef __WIN32
  SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), 15);
#endif
}

//------------------------------------------------------------------------

void push (int &rozmiar, int dane[])
{
  if (rozmiar >= 5)
    {
      cout << "Stos pelny!\n";
      this_thread::sleep_for (chrono::milliseconds (1000));
    }
  else
    {
      cout << "\n" << "PUSH (jaka liczbe polozyc na stosie): ";

      rozmiar = rozmiar + 1;
      cin >> dane[rozmiar];
    }
}

//------------------------------------------------------------------------

void pop (int &rozmiar, int dane[])
{
  if (rozmiar >= 1)
    {
      cout << "\n" << "POP - nastapi usuniecie ze stosu liczby: " << dane[rozmiar];
      this_thread::sleep_for (chrono::milliseconds (2000));

      rozmiar = rozmiar - 1;
    }
  else
    {
      cout << "Stos pusty!\n";
      this_thread::sleep_for (chrono::milliseconds (1000));
    }
}
//------------------------------------------------------------------------

void size (int &rozmiar)
{
  cout << "\nLiczba elementow na stosie: " << rozmiar << "\n";
  this_thread::sleep_for (chrono::milliseconds (2000));
}

//------------------------------------------------------------------------

void empty (int &rozmiar)
{

  if (rozmiar == 0)
    cout << "EMPTY (stos pusty?) ->  TRUE\n";
  else
    cout << "EMPTY (stos pusty?) ->  FALSE\n";
  this_thread::sleep_for (chrono::milliseconds (2000));
}

//------------------------------------------------------------------------


int main ()
{
  int dane[6];
  int rozmiar;

  int wybor;
  rozmiar = 0;

  do
    {
      wyswietl_stos (rozmiar, dane);

      cout << "MENU GLOWNE STOSU:" << "\n";
      cout << "------------------------------------------" << "\n";
      cout << "1. PUSH (dodaje element na szczyt stosu) " << "\n";
      cout << "2. POP (usuwa element ze szczytu stosu) " << "\n";
      cout << "3. SIZE (ile elementow na stosie) " << "\n";
      cout << "4. EMPTY (czy stos jest pusty?) " << "\n";
      cout << "5. Koniec programu " << "\n";
      cout << "------------------------------------------" << "\n";
      cout << "Wybor: ";
      cin >> wybor;

      switch (wybor)
        {
          case 1:
            push (rozmiar, dane);
          break;

          case 2:
            pop (rozmiar, dane);
          break;

          case 3:
            size (rozmiar);
          break;

          case 4:
            empty (rozmiar);
          break;
          case 5:
            return 0;

        }
    }
  while (true);

}
