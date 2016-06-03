#include <iostream>

using namespace std;

int populacja=1; int godzin=0;

int main()
{
    while (populacja <= 1000000000)
    {
        godzin++;
        populacja = populacja*2;

        cout<<"minelo godzin: "<<godzin;
        cout<<" liczba bakterii: "<<populacja<<endl;
    }
    return 0;
}
