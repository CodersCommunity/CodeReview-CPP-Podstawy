#include <iostream>
#include <cmath>

using namespace std;


int main() {
    cout << "(1947-2014) Ile razy LA Lakers wystapili w finale NBA?" << endl;
    cout << "Rick: ";
    int R;
    cin >> R;

    cout << "Daryl: ";
    int D;
    cin >> D;

    int x = 31;
    int o1 = abs(x - R); //fabs dla float i double
    int o2 = abs(x - D);

    if (o1 < o2)
        cout << "Wygral Rick!";

    else if (o2 < o1)
        cout << "Wygral Daryl!";

    else
        cout << "Remis!";

    return 0;
}
