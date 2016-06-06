#include <iostream>
#include <thread>
using namespace std;
int main() {

    for (int i = 15; i >= 0; i--) {
        this_thread::sleep_for(chrono::milliseconds(1000));
        cin.get();
        cout << i << "\n";
    }
    cout << "JEBUT\n";
    return 0;
}
