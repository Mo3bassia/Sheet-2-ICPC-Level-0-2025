#include <iostream>

using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    if (c == 0) {
        if (a > b) {
            cout << "Takahashi"; 
        } else {
            cout << "Aoki"; 
        }
    }

    if (c == 1) {
        if (a < b) {
            cout << "Aoki"; 
        } else {
            cout << "Takahashi"; 
        }

    }
    // if ((c == 0 && a > b) || (c == 1 && a<=b)) {
    //     cout << "Takahashi"; 
    // } else if ((c == 0 && a<=b) || (c == 1 && a > b)) {
    //     cout << "Aoki";
    // }
    return 0;
}