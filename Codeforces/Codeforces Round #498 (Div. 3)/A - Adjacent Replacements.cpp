#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int tmp;
        cin >> tmp;
        if (tmp % 2 == 0) {
            cout << (tmp - 1) << " ";
        }
        else {
            cout << tmp << " ";
        }
    }
    return 0;
}