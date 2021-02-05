#include <bits/stdc++.h>
using namespace std;

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
