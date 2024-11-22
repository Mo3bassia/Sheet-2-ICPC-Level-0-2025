#include <iostream>
#include <string>

using namespace std;

int main() {
    string i;
    cin >> i;
    
    if (i.length() > 19) {
        cout << "BigInteger";

    } else if (i.length() == 19) {
        if (i <= "9223372036854775807") {
            cout << "long";
        } else {
            cout << "BigInteger";
        }
    } else {
        long long num = stoll(i);
        if (num >=0 && num <=127) {
            cout << "byte";
        } else if (num >127 && num <=32767) {
            cout << "short";
        } else if (num >32767 && num <= 2147483647) {
            cout << "int";
        } else if (num > 2147483647 && num <=9223372036854775807) {
            cout << "long";
        }
    }
    
    return 0;
}
