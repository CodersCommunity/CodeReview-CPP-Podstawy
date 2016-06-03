#include <iostream>

using namespace std;


int main()
{
	float x;
    cout << "Podaj 1 liczbe: ";
    cin >> x;

	float y;
    cout << "Podaj 2 liczbe: ";
    cin >> y;

    cout<<endl;
    cout << "MENU GLOWNE" << endl;
    cout << "-----------------" << endl;
    cout << "1. Dodawanie" << endl;
    cout << "2. Odejmowanie" << endl;
    cout << "3. Mnozenie" << endl;
    cout << "4. Dzielenie" << endl;

	int wybor;
    cout << "Wybierz: ";
    cin >> wybor;

    if (wybor==1)
        cout<<"Suma = "<<x+y<<endl;

    else if (wybor==2)
        cout<<"Roznica = "<<x-y<<endl;

    else if (wybor==3)
        cout<<"Iloczyn = "<<x*y<<endl;

    else if (wybor==4)
	{
		if (y==0)
			cout << "Nie dzielimy przez zero!"<<endl;
		else
			cout<<"Iloraz = "<<x/y<<endl;
	}

    else
		cout<<"Nie ma takiej opcji w menu!"<<endl;

    return 0;
}
