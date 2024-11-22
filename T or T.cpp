#include <iostream>
using namespace std;

int main() {
    int N,A,B;
    cin >> N >> A >> B;
    int train = N*A;
    int taxi = B;
    if (taxi >= train)
        cout << train;
    else 
        cout << taxi;
    return 0;
}