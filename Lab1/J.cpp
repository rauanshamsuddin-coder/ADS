#include <bits/stdc++.h>
using namespace std;

bool beats(int x, int y) {
    if (x == 0 && y == 9) return true;
    if (x == 9 && y == 0) return false;
    return x > y;
}

int main() {
    deque<int> boris, nursik;
    int x;

    for (int i = 0; i < 5; i++) {
        cin >> x;
        boris.push_back(x);
    }
    for (int i = 0; i < 5; i++) {
        cin >> x;
        nursik.push_back(x);
    }

    int moves = 0;
    while (!boris.empty() && !nursik.empty()) {
        int b = boris.front(); boris.pop_front();
        int nu = nursik.front(); nursik.pop_front();
        moves++;

        if (beats(b, nu)) {
            boris.push_back(b);
            boris.push_back(nu);
        } else {
            nursik.push_back(b);
            nursik.push_back(nu);
        }
    }

    if (boris.empty()) {
        cout << "Nursik " << moves << endl;
    } else {
        cout << "Boris " << moves << endl;
    }

    return 0;
}
