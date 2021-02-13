#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using P = pair<int, int>;

// const 
const long long INF = 1LL << 60;

// restrict 
const int MAX_N = 100010;

// input 
int n;
int s[MAX_N];
int t[MAX_N];

int solve() {
    P p[MAX_N];
    rep(i, n) {
        p[i].first = t[i];
        p[i].second = s[i];
    }
    sort(p, p + n);

    int ans = 0, t = 0;
    rep(i, n) {
        if (t < p[i].second) {
            ++ans;
            t = p[i].first;
        }
    }

    cout << ans << endl;

    return 0;
}

int main() {
    cin >> n;
    rep(i, n) cin >> s[i];
    rep(i, n) cin >> t[i];

    solve();

    return 0;
}

/* input example 
5 
1 2 4 6 8
3 5 7 9 10
*/