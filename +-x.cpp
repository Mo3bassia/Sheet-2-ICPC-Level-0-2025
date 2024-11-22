#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    int sum = a + b;
    int minus = a - b;
    int multi = a * b;

    if (sum > minus && sum > multi) 
        cout << sum;
    else if (minus > sum && minus > multi)
        cout << minus;
    else if (minus == sum || minus == multi)
        cout << minus;
    else if (multi > sum && multi > minus) 
        cout << multi;

    return 0;
}