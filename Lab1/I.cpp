#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        queue<int> q;
        for (int i = 1; i <= n; i++) q.push(i);

        vector<int> ans(n + 1);

        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                int front = q.front();
                q.pop();
                q.push(front);
            }
            int pos = q.front();
            q.pop();
            ans[pos] = i;
        }

        for (int i = 1; i <= n; i++) {
            if (i > 1) cout << " ";
            cout << ans[i];
        }
        cout << endl;
    }

    return 0;
}
