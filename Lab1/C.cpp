#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a;
    cin >> a;

    if (a < 2) {
        cout << "NO" << endl;
        return 0;
    }

    bool prime = true;
    for (long long i = 2; i * i <= a; i++) {
        if (a % i == 0) {
            prime = false;
            break;
        }
    }

    cout << (prime ? "YES" : "NO") << endl;
    return 0;
}
