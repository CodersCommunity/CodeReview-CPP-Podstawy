#include <iostream>

using namespace std;


int main()
{
	int populacja=1;
	int godzin=0;
    do
    {
        godzin++;
        populacja = populacja*2;

        cout<<"minelo godzin: "<<godzin;
        cout<<" liczba bakterii: "<<populacja<<endl;
    }while (populacja <= 1000000000);

    return 0;
}
