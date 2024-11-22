// Hard One
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double m, n, a;
    cin >> m >> n >> a;
    cout << (long long)(ceil((double)m / a) * ceil((double)n / a));
    return 0;
}