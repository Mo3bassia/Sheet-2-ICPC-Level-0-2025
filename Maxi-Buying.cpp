#include <iostream>

using namespace std;

int main() {

    int N;
    cin >> N;
    int tax = N * 1.08;
    if (tax < 206) 
        cout << "Yay!";
    else if (tax == 206)
        cout << "so-so";
    else if (tax > 206)
        cout << ":(";
    return 0;
}