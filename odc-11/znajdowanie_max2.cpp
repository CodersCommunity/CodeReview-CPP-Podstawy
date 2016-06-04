#include <iostream>

using namespace std;


int main()
{
	int a;
	int b;
	int c;
	cout << "Podaj 3 liczby rozdzielone spacja: ";
	cin>>a>>b>>c;

	int m=a;
	if (b>m)
		m=b;

	if (c>m)
		m=c;

	cout<<"Najwieksza liczba to "<<m << endl;

	return 0;
}
