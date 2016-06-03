#include <iostream>

using namespace std;

float x,y;
int wybor;

int main()
{
    cout << "Podaj 1 liczbe: ";
    cin >> x;
    cout << "Podaj 2 liczbe: ";
    cin >> y;

    cout<<endl;
    cout << "MENU GLOWNE" << endl;
    cout << "-----------------" << endl;
    cout << "1. Dodawanie" << endl;
    cout << "2. Odejmowanie" << endl;
    cout << "3. Mnozenie" << endl;
    cout << "4. Dzielenie" << endl;

    cout << "Wybierz: ";
    cin >> wybor;

    if (wybor==1)

            cout<<"Suma = "<<x+y;

    else if (wybor==2)

            cout<<"Roznica = "<<x-y;

    else if (wybor==3)

            cout<<"Iloczyn = "<<x*y;

    else if (wybor==4)

            if (y==0) cout << "Nie dzielimy przez zero!";
            else cout<<"Iloraz = "<<x/y;

    else  cout<<"Nie ma takiej opcji w menu!";

    return 0;
}
