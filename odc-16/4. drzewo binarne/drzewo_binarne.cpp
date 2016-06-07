#include <iostream>
#include <thread>
#ifdef __WIN32
#include <windows.h>
#endif

using namespace std;

//---------------------- ZMIENNE GLOBALNE----------------------------
int wybor;
int *korzen;

//-------- VOID USTAWIAJACY KURSOR W MIEJSCU X,Y NA EKRANIE --------
#ifdef __WIN32

void gotoxy (int x, int y)
{
  COORD c;
  c.X = x - 1;
  c.Y = y - 1;
  SetConsoleCursorPosition (GetStdHandle (STD_OUTPUT_HANDLE), c);
}
#endif
#ifdef __linux__
void gotoxy (int x, int y)
{
    printf("%c[%d;%df",0x1B,y,x);
}
#endif

//-------------------------- ZMIENNE ------------------------------

int dane[16];
bool pusty[16];

//----------------------- WYSWIETLANIE DRZEWA -----------------------
void wyswietl_drzewo ()
{
#ifdef __WIN32
  system ("CLS");
  SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), 14);
#endif
#ifdef __linux__
 system("clear");
#endif

  //wyswietlenie drzewa
  gotoxy (40, 1);
  if (pusty[1])
    cout << "_";
  else
    cout << dane[1];

  gotoxy (20, 4);
  if (pusty[2])
    cout << "_";
  else
    cout << dane[2];

  gotoxy (60, 4);
  if (pusty[3])
    cout << "_";
  else
    cout << dane[3];

  gotoxy (10, 6);
  if (pusty[4])
    cout << "_";
  else
    cout << dane[4];

  gotoxy (30, 6);
  if (pusty[5])
    cout << "_";
  else
    cout << dane[5];

  gotoxy (50, 6);
  if (pusty[6])
    cout << "_";
  else
    cout << dane[6];

  gotoxy (70, 6);
  if (pusty[7])
    cout << "_";
  else
    cout << dane[7];

  gotoxy (5, 10);
  if (pusty[8])
    cout << "_";
  else
    cout << dane[8];
  gotoxy (15, 10);
  if (pusty[9])
    cout << "_";
  else
    cout << dane[9];

  gotoxy (25, 10);
  if (pusty[10])
    cout << "_";
  else
    cout << dane[10];

  gotoxy (35, 10);
  if (pusty[11])
    cout << "_";
  else
    cout << dane[11];

  gotoxy (45, 10);
  if (pusty[12])
    cout << "_";
  else
    cout << dane[12];

  gotoxy (55, 10);
  if (pusty[13])
    cout << "_";
  else
    cout << dane[13];

  gotoxy (65, 10);
  if (pusty[14])
    cout << "_";
  else
    cout << dane[14];

  gotoxy (75, 10);
  if (pusty[15])
    cout << "_";
  else
    cout << dane[15];

  cout << endl << endl << endl;
#ifdef __WIN32
  SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), 15);
#endif
}

//------------------- DODAJ LICZBE DO DRZEWA ------------------------
void add ()
{
  int liczba;
  cout << "Jaka liczbe dodac do drzewa: ";
  cin >> liczba;

  //drzewo puste
  if (pusty[1])
    {
      korzen = &dane[1];
      *korzen = liczba;
      pusty[1] = false;
    }
  else //drzewo niepuste
    {
      bool znalazlem_miejsce = false;
      int wezel = 1;

      while (!znalazlem_miejsce)
        {
          if (pusty[wezel])
            {
              znalazlem_miejsce = true;
              dane[wezel] = liczba;
              pusty[wezel] = false;

            }
          else if (liczba < dane[wezel])
            {
              //w lewo
              wezel = 2 * wezel;
            }
          else
            {
              //w prawo
              wezel = 2 * wezel + 1;
            }
          if (wezel > 15)
            {
              cout << "Potrzebne byloby wieksze drzewo!";
              this_thread::sleep_for (chrono::milliseconds (3000));
              znalazlem_miejsce = true;
            }
        }
    }
}

void find ()
{
  int liczba;
  cout << "Jaka liczbe znalezc w drzewie: ";
  cin >> liczba;

  bool znalazlem = false;
  int wezel = 1;

  while (!znalazlem)
    {
      if (liczba == dane[wezel])
        {
          cout << "Znaleziono liczbe w wezle nr: " << wezel;
          this_thread::sleep_for (chrono::milliseconds (3000));

          znalazlem = true;
        }
      else if (liczba < dane[wezel])
        {
          //w lewo
          wezel = 2 * wezel;
        }
      else
        {
          //w prawo
          wezel = 2 * wezel + 1;
        }
      if (wezel > 15)
        {
          cout << "Nie znaleziono!";
          this_thread::sleep_for (chrono::milliseconds (3000));
          znalazlem = true;
        }
    }
}

//----------------------- G�OWNY PROGRAM ----------------------------
int main ()
{
  for (int i = 1; i <= 15; i++)
    pusty[i] = true;

  korzen = NULL;

  do
    {
      wyswietl_drzewo ();

      cout << "----------------------------------" << endl;
      cout << "	 EMULATOR DRZEWA BINARNEGO " << endl;
      cout << "----------------------------------" << endl;
      cout << "1. ADD (dodaje element do drzewa)" << endl;
      cout << "2. FIND (szuka elementu w drzewie)" << endl;
      cout << "3. EXIT (zakonczy ten program)" << endl;
      cout << "----------------------------------" << endl;
      cout << "	 WYBOR: ";
      cin >> wybor;
      cout << endl;

      switch (wybor)
        {
          case 1:
            add ();
          break;
          case 2:
            find ();
          break;
          case 3:
            return 0;
        }

    }
  while (true);

}
