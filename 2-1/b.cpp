#include <bits/stdc++.h>
using namespace std;

// lake counting poj 2386

// input 
int n, m;
string field[110];

int dfs(int y, int x) {
    field[y][x] = '.';

    for (int dx=-1; dx<=1; ++dx) {
        for (int dy=-1; dy<=1; ++dy) {
            int nx = x + dx, ny = y + dy;
            if (0 <= nx && nx <= m && 0 <= ny && ny <= n && field[ny][nx] == 'W') dfs(ny, nx);
        }
    }

    return 0;
}

int solve() {
    int res = 0;
    for (int i=0; i<n; ++i) {
        for (int j=0; j<m; ++j) {
            if (field[i][j] == 'W') {
                dfs(i, j);
                ++res;
            }
        }
    }

    cout << res << endl;

    return 0;
}

int main() {
    cin >> n >> m;
    for (int i=0; i<n; ++i) cin >> field[i];

    solve();

    return 0;
}

/* example
10 12 
W........WW.
.WWW.....WWW
....WW...WW.
.........WW.
.........W..
..W......W..
.W.W.....WW.
W.W.W.....W.
.W.W......W.
..W.......W.
*/