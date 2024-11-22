#include <iostream>
using namespace std;

int main() {
    char a;
    cin >> a;
    if (a == 'a' || a == 'i' || a == 'o' || a == 'e' || a == 'u') {
        cout << "vowel" << endl;
    } else {
        cout << "consonant";
    }
    return 0;
}