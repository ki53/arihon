#include <bits/stdc++.h>
using namespace std;

template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b; return true; } return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b; return true; } return false;}
int ctoi(char c) {return (int)c-48;}
char itoc(int i) {return (char)(i+48);}
template<class T> inline int binary_search(vector<T>& a, int key) {
    int ng = -1;
    int ok = (int)a.size();
    while (abs(ok - ng) > 1) {
        int mid = (ok + ng) / 2;
        if (a[mid] >= key) ok = mid;
        else ng = mid;
    }
    return ok;
}

const long long INF = 1LL << 60;

// input 
int n;
int a[30];
int k;

// n個決め終わったら、sumと等しいか判定
bool dfs(int i, int sum) {
    if (i == n) return sum == k;

    if (dfs(i + 1, sum)) return true;
    if (dfs(i + 1, sum + a[i])) return true;
    return false;

}

int solve() {
    if(dfs(0, 0)) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}

int main() {
    cin >> n;
    for (int i=0; i<n; ++i) cin >> a[i];
    cin >> k;

    solve();

    return 0;
}
