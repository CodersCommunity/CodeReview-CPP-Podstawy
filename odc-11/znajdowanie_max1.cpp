#include <iostream>

using namespace std;


int main()
{
	cout << "Podaj 3 liczby rozdzielone spacja: ";

	int a;
	int b;
	int c;
	cin>>a>>b>>c;

	if (a>=b && a>=c)
		cout<<"Najwieksza liczba to "<<a<<endl;

	else if (b>=a && b>=c)
		cout<<"Najwieksza liczba to "<<b;

	else if (c>=a && c>=b)
		cout<<"Najwieksza liczba to "<<c;

	 return 0;
}
