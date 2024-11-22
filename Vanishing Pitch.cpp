#include <iostream>
using namespace std;

int main() {
    int V,T,S,D;
    cin >> V >> T >> S >> D;
    double time = (double)D/V;
    if (time < T || time > S) {
        cout << "Yes";
    } else {
        cout << "No";

    }
    return 0;
}