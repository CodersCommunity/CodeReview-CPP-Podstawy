#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    cout<<pow(27,1.0/3.0)<<endl;

    cout << "A (x1, y1) = " << endl;
	float x_1, y_1;
    cin>>x_1>>y_1;

	float x_2, y_2;
    cout << "B (x2, y2) = " << endl;
    cin>>x_2>>y_2;

    float d = sqrt(pow(x_2-x_1,2)+pow(y_2-y_1,2));
    cout<<d<<endl;

    return 0;
}
