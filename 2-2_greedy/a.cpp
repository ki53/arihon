#include <bits/stdc++.h>
using namespace std;

const long long INF = 1LL << 60;
int c_v[] = {1, 5, 10, 50, 100, 500};
int c[10];
int a;

// input 
long long n;

int solve() {
    int ans = 0;
    for (int i=5; i>=0; --i) {
        int t = min(a / c_v[i], c[i]);
        a -= t * c_v[i];
        ans += t;
    }

    cout << ans << endl;

    return 0;
}

int main() {
    for (int i=0; i<6; ++i) cin >> c[i];
    cin >> a;

    solve();

    return 0;
}

/* input example
3 2 1 3 0 2
620
*/