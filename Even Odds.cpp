// First Attempt
/*#include <iostream>
using namespace std;


int main() {
    int n,k;
    cin >> n >> k;
    if (n % 2 != 0) {
        cout << "Odd" << endl;
        if (k < (float)n/2 + 1) {
            cout <<  (k*2)-1 << endl;
        } else {
            cout << (k-((n/2)-1))*2 << endl;
        }
    } else {
        cout << "Even" << endl;
        if (k <= n/2) {
            cout << (k*2)-1<< endl;
        } else {
            cout << (k-(n/2))*2 << endl;
        }
    }
    return 0;
}*/

// Second Attempt
#include <iostream>
using namespace std;

int main() {
    long long n,k;
    cin >> n >> k;
    long long even_Nums;
    long long odd_Nums;
    if (n % 2 == 0) {
        odd_Nums = (n / 2);
    } else  {
        odd_Nums = (n / 2) +1;
    }
    even_Nums = (n / 2);
    if (k <= odd_Nums) {
        cout << (k*2)-1 << endl;
    } else {
        cout << (k-odd_Nums)*2 << endl;
    }
    return 0;
}