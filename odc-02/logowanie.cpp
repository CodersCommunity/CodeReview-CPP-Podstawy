#include <iostream>

using namespace std;

string login, haslo;

int main()
{
    cout << "Podaj login: ";
    cin >> login;
    cout << "Podaj haslo: ";
    cin >> haslo;

    if ((login=="admin")&&(haslo=="szarlotka"))
    {
        cout<<"Udalo sie zalogowac!";
    }
    else
    {
        cout<<"nie udalo sie zalogowac!";
    }

    return 0;
}
