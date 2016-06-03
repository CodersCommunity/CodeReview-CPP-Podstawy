#include <iostream>
#include <windows.h>

using namespace std;

int main()
{

    for (int i=15; i>=0; i--)
    {
        Sleep(1000);
		cin.get();
        cout << i <<endl;
    }
    cout<<"JEBUT\n";
    return 0;
}
