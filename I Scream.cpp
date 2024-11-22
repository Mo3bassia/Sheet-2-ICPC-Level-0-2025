// First Attempt
#include <iostream>
using namespace std;
/*
int main() {
    int A,B;
    cin >> A >> B;
    int result = A+B;
    if (result == 0) {
        cout << 4;
    }
    else if (result <=3 ) {
        cout << 3;
    } else if (result > 3 && result <= 10) {
        cout << 2;
    } else if (result > 10) {
        cout << 1;
    }
    return 0;
}
*/

int main() {
    // Second Attempt
    // long long solids,fat;
    // cin >> solids >> fat;
    // solids += fat;
    // if (solids < 3 && fat < 3) {
    //     cout << 4;
    // } else if (solids >= 3 && solids <= 10) {
    //     cout << 3;
    // } else if (solids >= 10 && solids < 15 && fat >= 3 && fat < 8 ) {
    //     cout << 2;
    // } else if (solids >= 15 && fat >= 8) {
    //     cout << 1;
    // }

    // Third Attempt
    int solids,fat;
    cin >> solids >> fat;
    int total_solids = solids + fat;
    if (total_solids >= 15 && fat >= 8) {
        cout << "1\n";
    } else if (total_solids >= 10 && fat >=3) {
        cout << "2\n";
    } else if (total_solids >= 3) {
        cout << "3\n";
    } else {
        cout << "4\n";
    }
    return 0;
}