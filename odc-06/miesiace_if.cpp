#include <iostream>

using namespace std;

int nr_miesiaca;

int main()
{
    cout << "Podaj numer miesiaca: ";
    cin >> nr_miesiaca;

    if ((nr_miesiaca==1)||(nr_miesiaca==3)||(nr_miesiaca==5)||
        (nr_miesiaca==7)||(nr_miesiaca==8)||(nr_miesiaca==10)||
        (nr_miesiaca==12))

            cout<<"Ten miesiac ma 31 dni!";

    else if ((nr_miesiaca==4)||(nr_miesiaca==6)||(nr_miesiaca==9)||
        (nr_miesiaca==11))
            cout<<"Ten miesiac ma 30 dni!";

    else if (nr_miesiaca==2)
    {
                int rok;
                cout<<"Podaj rok: ";
                cin >> rok;

if (((rok%4 == 0) && (rok%100 != 0)) || (rok%400 == 0))
    cout<<"Ten miesiac ma 29 dni!";
else cout<<"Ten miesiac ma 28 dni!";

    }
    else cout<<"Niepoprawna opcja w menu";


    return 0;
}
