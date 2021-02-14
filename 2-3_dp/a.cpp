#include <bits/stdc++.h>
// this is ng pattern
// O(2^n)

// using
using namespace std;

// def
#define rep(i, n) for (int i = 0; i < (n); ++i)

// const
const int MAX_N = 110;

// input 
int n, v[MAX_N], w[MAX_N], W;

int rec(int i, int j) {
    int res;
    if (i == n) {
        // no more goods remain 
        res = 0;

    } else if (j < w[i]) {
        // this goods cannot contain
        res = rec(i + 1, j);

    } else {
        // try two ways: contain and not 
        res = max(rec(i + 1, j), rec(i + 1, j - w[i]) + v[i]);
    }
    return res;
}

int solve() {
    int ans = rec(0, W);
    cout << ans << endl;

    return 0;
}

int main() {
    cin >> n;
    rep(i, n) cin >> w[i] >> v[i];
    cin >> W;

    solve();

    return 0;
}

/* input sample
-- template
n
w1 v1
...
wn vn
W

4
2 3
1 2 
3 4
2 2
5
*/