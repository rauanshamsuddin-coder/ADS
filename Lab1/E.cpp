#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    vector<long long> factors;
    for (long long i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1) {
        factors.push_back(n);
    }

    for (int i = 0; i < (int)factors.size(); i++) {
        if (i > 0) cout << " ";
        cout << factors[i];
    }
    cout << endl;

    return 0;
}
