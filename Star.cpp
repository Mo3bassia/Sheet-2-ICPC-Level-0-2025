#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
    for (int i = 0; i < 1000; i++) {
        if (x -100 < 0) break;
        x -= 100;
    }
    cout << 100-x << endl;
    return 0;
}