#include <iostream>
#include <list>
#include <chrono>
#include <thread>
#ifdef __WIN32
#include <windows.h>
#endif

using namespace std;

void wyswietl (list<int> &lista)
{
#ifdef __WIN32
  system ("CLS");
  SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), 10);
#endif

  cout << " ZAWARTOSC LISTY: " << "\n";
  cout << "---------------------------" << "\n";

  for (list<int>::iterator i = lista.begin (); i != lista.end (); ++i)
    cout << *i << " ";

  cout << "\n";
  cout << "---------------------------" << "\n" << "\n";
#ifdef __WIN32
  SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), 15);
#endif
}

//-------- 1 ------------

void push_front (list<int> &lista)
{
  int liczba;
  cout << "Podaj jaka liczbe wstawic na pocz\245tek listy: ";
  cin >> liczba;
  lista.push_front (liczba);
}

//--------- 2 -----------

void push_back (list<int> &lista)
{
  int liczba;
  cout << "Podaj jaka liczbe wstawic na koniec listy: ";
  cin >> liczba;
  lista.push_back (liczba);
}

//---------- 3 ---------

void pop_front (list<int> &lista)
{
  cout << "Nast\245pi usuni\251cie liczby z pocz\245tku listy" << "\n";
  this_thread::sleep_for (chrono::milliseconds (1000));
  lista.pop_front ();
}

//---------- 4 ---------

void pop_back (list<int> &lista)
{
  cout << "Nast\245pi usuni\251cie liczby z konca listy" << "\n";
  this_thread::sleep_for (chrono::milliseconds (1000));
  lista.pop_back ();
}

//---------- 5 ----------

void size (list<int> &lista)
{
  cout << "Liczb na li\230cie: " << lista.size () << "\n";
  this_thread::sleep_for (chrono::milliseconds (1000));
}

//---------- 6 ----------

void max_size (list<int> &lista)
{
  cout << "Max liczb na li\230cie: " << lista.max_size () << "\n";
  this_thread::sleep_for (chrono::milliseconds (1000));
}

//---------- 7 ----------

void empty (list<int> &lista)
{
  cout << "Czy lista pusta? -> ";
  if (lista.empty () == 1)
    cout << "TRUE";
  else
    cout << "FALSE";
  this_thread::sleep_for (chrono::milliseconds (1000));
}

//---------- 8 ----------

void remove (list<int> &lista)
{
  int liczba;
  cout << "Usun z listy wszystkie liczby rowne: ";
  cin >> liczba;
  lista.remove (liczba);
}

//---------- 9 ----------

void sort (list<int> &lista)
{
  cout << "Nastapi posortowanie listy!\n";
  lista.sort ();
  this_thread::sleep_for (chrono::milliseconds (1000));
}

//---------- 10 ----------

void reverse (list<int> &lista)
{
  cout << "Nastapi odwrocenie kolejnosci liczb!\n";
  lista.reverse ();
  this_thread::sleep_for (chrono::milliseconds (1000));
}

//---------- 11 ----------

void exit ()
{
#ifdef __WIN32
  SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), 12);
#endif
  cout << "Koniec programu!\n";
  this_thread::sleep_for (chrono::microseconds (2000));
#ifdef __WIN32
  SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), 0);
#endif
}
//------------------------

int main ()
{
  list<int> lista; //utworzenie listy przechowujacej liczby calkowite
  int wybor;

  do
    {

      wyswietl (lista);

      cout << " MENU GLOWNE LISTY:" << "\n";
      cout << "---------------------------" << "\n";
      cout << "1.  push_front" << "\n";
      cout << "2.  push_back" << "\n";
      cout << "3.  pop_front" << "\n";
      cout << "4.  pop_back" << "\n";
      cout << "5.  size" << "\n";
      cout << "6.  max_size" << "\n";
      cout << "7.  empty" << "\n";
      cout << "8.  remove" << "\n";
      cout << "9.  sort" << "\n";
      cout << "10. reverse" << "\n";
      cout << "11. exit" << "\n";
      cout << "---------------------------" << "\n";
      cout << "Wybor: ";
      cin >> wybor;

      switch (wybor)
        {
          case 1:
            push_front (lista);
          break;
          case 2:
            push_back (lista);
          break;
          case 3:
            pop_front (lista);
          break;
          case 4:
            pop_back (lista);
          break;
          case 5:
            size (lista);
          break;
          case 6:
            max_size (lista);
          break;
          case 7:
            empty (lista);
          break;
          case 8:
            remove (lista);
          break;
          case 9:
            sort (lista);
          break;
          case 10:
            reverse (lista);
          break;
          case 11:
            exit ();
            return 0;

          default:
            cout << "POMYLKA!\n";
          this_thread::sleep_for (chrono::milliseconds (1000));
          break;
        }

    }
  while (true);

}
