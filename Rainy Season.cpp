#include <iostream>
using namespace std;

int main() {
    string S;
    int result = 0;
    cin >> S;
    char days[3] = {S[0],S[1],S[2]};
    for (int i = 0; i < 3; i++) {
        if (days[i] == 'S' && i != 2 && days[2] == 'R') {
            result = 0;
        }
        if (days[i] == 'R') {
            result +=1;
        }
    }
    cout << result;
    return 0;
}