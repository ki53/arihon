#include <bits/stdc++.h>
// memo recursion
// O(nW)

// using
using namespace std;

// def
#define rep(i, n) for (int i = 0; i < (n); ++i)

// const
const int MAX_N = 110;
const int MAX_W = 110;

// input 
int n, v[MAX_N], w[MAX_N], W;

// param
int dp[MAX_N][MAX_W];

int rec(int i, int j) {
    if (dp[i][j] >= 0) return dp[i][j];

    int res;
    if (i == n) res = 0; // no more goods 
    else if (j < w[i]) res = rec(i + 1, j); // cannot add another goods
    else res = max(rec(i + 1, j), rec(i + 1, j - w[i]) + v[i]); // through, or lose weight and add value

    return dp[i][j] = res;
}


int solve() {
    memset(dp, -1, sizeof(dp)); // init dp table

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

4
2 3
1 2 
3 4
2 6
1 5
5
*/