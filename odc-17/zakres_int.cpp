#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main()
{
	long long int x;
	x=pow(2,32)-1;

	unsigned int y = x;

	cout<<setprecision(20);

	cout<<"MAX: "<<y<<endl;

	cout<<x<<endl;

	cout << sizeof(x) << endl;

	return 0;
}
