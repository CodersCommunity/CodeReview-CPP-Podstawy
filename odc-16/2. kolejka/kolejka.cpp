#include <iostream>
#include <thread>
#ifdef __WIN32
#include <windows.h>
#endif

using namespace std;

void wyswietl_kolejke (int &ile, int &glowa, int dane[])
{
#ifdef __WIN32
  system ("CLS");
  SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), 14);
#endif

  cout << "\n";
  cout << "-------------------" << "\n";
  cout << "ZAWARTOSC KOLEJKI: " << "\n";
  cout << "-------------------" << "\n";

  if (ile == 0)
    cout << "pusta";

  else
    {

      int indeks;

      for (int i = 0; i < ile; i++)
        {
          indeks = glowa + i;
          if (glowa + i >= 5) indeks = glowa + i - 5;
          cout << dane[indeks] << " ";
        }

    }

  cout << "\n" << "-------------------" << "\n" << "\n";

#ifdef __WIN32
  SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), 15);
#endif
}

//------------------------------------------------------------------------

void push (int &ile, int &ogon, int dane[])
{
  if (ile >= 5)
    {
      cout << "Kolejka pelna!\n";
      this_thread::sleep_for (chrono::milliseconds (1000));
    }
  else if (ile == 0)
    {
      cout << "\n" << "PUSH (jaka liczbe wstawic do kolejki): ";
      cin >> dane[ogon];
      ogon = ogon + 1;
      ile = ile + 1;

    }
  else
    {
      cout << "\n" << "PUSH (jaka liczbe wstawic do kolejki): ";
      cin >> dane[ogon];
      ogon = (ogon + 1) % 5;
      ile = ile + 1;
    }
}

//------------------------------------------------------------------------

void pop (int &ile, int &glowa, int dane[])
{
  if (ile == 0)
    {
      cout << "Kolejka jest pusta!\n";
      this_thread::sleep_for (chrono::milliseconds (1000));
    }
  else
    {
      cout << "POP - nastapi usuniecie z kolejki liczby: " << dane[glowa] << "\n";
      glowa = (glowa + 1) % 5;
      ile = ile - 1;
      this_thread::sleep_for (chrono::milliseconds (1000));

    }

}
//------------------------------------------------------------------------

void size (int &ile)
{
  cout << "Liczba elementow w kolejce: " << ile << "\n";
  this_thread::sleep_for (chrono::milliseconds (1000));
}

//------------------------------------------------------------------------

void empty (int &ile)
{

  if (ile == 0)
    cout << "EMPTY (kolejka pusta?) ->  TRUE\n";
  else
    cout << "EMPTY (kolejka pusta?) ->  FALSE\n";
  this_thread::sleep_for (chrono::milliseconds (1000));
}

//------------------------------------------------------------------------

int main ()
{

  int wybor;
  int dane[5];
  int ile = 0;
  int glowa = 0;
  int ogon = 0;

  do
    {

      wyswietl_kolejke (ile, glowa, dane);

      cout << "MENU GLOWNE KOLEJKI:" << "\n";
      cout << "------------------------------------------" << "\n";
      cout << "1. PUSH (dodaje element na koniec kolejki) " << "\n";
      cout << "2. POP (usuwa element z poczatku kolejki) " << "\n";
      cout << "3. SIZE (ile elementow w kolejce) " << "\n";
      cout << "4. EMPTY (czy kolejka jest pusta?) " << "\n";
      cout << "5. Koniec programu " << "\n";
      cout << "------------------------------------------" << "\n";
      cout << "Wybor: ";
      cin >> wybor;

      switch (wybor)
        {
          case 1:
            push (ile, ogon, dane);
          break;

          case 2:
            pop (ile, glowa, dane);
          break;

          case 3:
            size (ile);
          break;

          case 4:
            empty (ile);
          break;

          case 5:
            return 0;
        }

    }
  while (true);

}
