#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, n, m;
    cin >> a >> n >> m;

    a %= m;
    long long res = 1 % m;

    while (n > 0) {
        if (n % 2 == 1) {
            res = (res * a) % m;
        }
        a = (a * a) % m;
        n /= 2;
    }

    cout << res << endl;
    return 0;
}
