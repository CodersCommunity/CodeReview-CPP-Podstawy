#include <iostream>

using namespace std;

int ile;

int main()
{
    cout << "Ile liczb w tablicy: ";
    cin>>ile;

    //dynamiczna alokacja tablicy
    int *tablica;
    tablica=new int [ile];

    //pokaz kolejne adresy komorek w tablicy
    for (int i=0; i<ile; i++)
    {
        cout<<(int)tablica<<endl;
        tablica++;
    }

    delete [] tablica;
    tablica=NULL;


    return 0;
}
