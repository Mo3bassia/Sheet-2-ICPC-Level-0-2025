#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    int d1 = N / 100;
    int d2 = (N / 10)%10;
    int d3 = N % 10;
    if (d1 == d3) 
        cout << "Yes";
    else 
        cout << "No";
    return 0;
}