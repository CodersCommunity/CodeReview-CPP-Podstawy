#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdio>

using namespace std;


int main()
{
    cout<<"Witaj! Pomyslalem sobie liczbe 1..100"<<endl;
    srand(time(NULL));

	int liczba;
    liczba = rand()%100+1;

	int strzal = -1;
	int ile_prob=0;

    while(strzal!=liczba)
    {
      ile_prob++;

      cout<<"Zgadnij jaka (to Twoja "<<ile_prob<<" proba): ";
      cin>>strzal;

      if(strzal==liczba)
        cout<<"Udalo sie! Wygrywasz w "<<ile_prob<<" probie"<<endl;

      else if(strzal<liczba)
        cout<<"To za malo"<<endl;

      else
        cout<<"To za duzo"<<endl;
    }

    return 0;
}
