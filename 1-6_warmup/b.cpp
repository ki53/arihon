#include <bits/stdc++.h>
using namespace std;

template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b; return true; } return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b; return true; } return false;}
int ctoi(char c) {return (int)c-48;}
char itoc(int i) {return (char)(i+48);}

const long long INF = 1LL << 60;

// input
long long l;
long long n;
long long x[100000];
long long ans_min = -INF;
long long ans_max = -INF;

int solve()
{
    for (int i=0; i<n; ++i) {
        chmax(ans_min, min(x[i], l - x[i]));
        chmax(ans_max, max(x[i], l - x[i]));
    }

    return 0;
}

int main()
{
    cin >> l >> n;
    for (int i=0; i<n; ++i) cin >> x[i];

    solve();

    cout << "min = " << ans_min << endl;
    cout << "max = " << ans_max << endl;

    return 0;
}
