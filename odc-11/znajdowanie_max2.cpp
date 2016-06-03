#include <iostream>

using namespace std;

int a,b,c,m;

int main()
{
   cout << "Podaj 3 liczby rozdzielone spacja: ";
   cin>>a>>b>>c;

   m=a;
   if (b>m) m=b;
   if (c>m) m=c;

   cout<<"Najwieksza liczba to "<<m;

    return 0;
}
