#include <bits/stdc++.h>
using namespace std;

int n; 
int a[110]; 
int ans = 0;

int solve() {
    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j) {
            for (int k=0; k<n; ++k) {
                if (i == j || j == k || k == i) continue;
                int longest = max(a[i], max(a[j], a[k]));
                if (longest * 2 < a[i] + a[j] + a[k]) {
                    ans = max(ans, a[i] + a[j] + a[k]);
                }
            }
        }
    }
    return 0;
}

int main(){
    cin >>n;
    for (int i=0; i<n; ++i) cin >> a[i];

    solve();

    cout << ans << endl; 

    return 0;
}
