#include <iostream>

using namespace std;

float srednia(float *tab, int ile)
{
    float suma=0;
    for (int i=0; i<ile; i++)
    {
        suma+=*tab;
		*tab=999;
        tab++;
    }
    return suma/ile;
}

int main()
{

    float tablica[3];
    tablica[0] = 1.5;
    tablica[1] = 2.3;
    tablica[2] = 0.75;

    cout<<"Srednia wynosi: "<<srednia(tablica, 3);

    cout<<endl<<tablica[0];
    cout<<endl<<tablica[1];
    cout<<endl<<tablica[2];

    return 0;
}
