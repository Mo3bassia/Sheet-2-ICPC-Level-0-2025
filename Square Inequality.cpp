#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int A,B,C;
    cin >> A >> B >> C;
    int left = pow(A,2) + pow(B,2);
    int right = pow(C,2);
    if (left < right) 
        cout << "Yes";
    else 
        cout << "No";
    return 0;
}