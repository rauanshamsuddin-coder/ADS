#include <bits/stdc++.h>
using namespace std;

string build(string s) {
    string res = "";
    for (char c : s) {
        if (c == '#') {
            if (!res.empty()) {
                res.pop_back();
            }
        } else {
            res.push_back(c);
        }
    }
    return res;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    if (build(s1) == build(s2)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
