#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <cmath>


using namespace std;

vector<int> help(int n, vector<int> p, vector<int> q) {
    vector<int> r(n, 0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            int x = 1 << p[j];         // 2^p_j
            int y = 1 << q[i - j];     // 2^q_{i - j}
            r[i] = max(r[i], x + y);
        }
    }
    return r;
}



int main() {
    int t;
cin >> t;
while (t--) {
    int n;
    cin >> n;
    vector<int> p(n), q(n);
    for (int i = 0; i < n; i++) cin >> p[i];
    for (int i = 0; i < n; i++) cin >> q[i];

    vector<int> r = help(n, p, q);
    for (int i = 0; i < n; i++) cout << r[i] << " ";
    cout << endl;
}
    return 0;
}
