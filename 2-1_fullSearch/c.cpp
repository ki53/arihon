#include <bits/stdc++.h>
using namespace std;

// def
const int INF = 100000000;
typedef pair<int, int> P;

// input 
int n, m;
string maze[110];
int sx, sy, gx, gy;

// param
int d[110][110];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
queue<P> que;

inline bool canMove(int ny, int nx) {
    if (0 <= nx && nx <= m && 0 <= ny && ny <= n && maze[ny][nx] != '#') return true;
    else return false;
}

int bfs() {
    que.push(P(sy, sx));
    d[sy][sx] = 0;

    while(que.size()) {
        P p = que.front(); 
        que.pop();

        if (p.first == gy && p.second == gx) break;
        for (int i=0; i<4; ++i) {
            int nx = p.second + dx[i];
            int ny = p.first + dy[i];

            if (canMove(ny, nx) && d[ny][nx] == INF) {
                que.push(P(ny, nx));
                d[ny][nx] = d[p.first][p.second] + 1;
            }
        }
    }
    return d[gy][gx];
}

int solve() {
    for (int i=0; i<n; ++i) {
        for (int j=0; j<m; ++j) {
            if (maze[i][j] == 'S') {
                sx = j;
                sy = i;
            }
            if (maze[i][j] == 'G') {
                gx = j;
                gy = i;
            }
        }
    }

    for (int i=0; i<n; ++i) for (int j=0; j<m; ++j) d[i][j] = INF;

    int ans = bfs();
    // if (ans == INF) cout << "No" << endl;
    // else cout << "Yes" << endl;
    cout << ans << endl;

    return 0;
}

int main() {
    cin >> n >> m;
    for (int i=0; i<n; i++) cin >> maze[i];

    solve();

    return 0;
}

/* examples
10 10
#S######.#
......#..#
.#.##.##.#
.#........
##.##.####
....#....#
.#######.#
....#.....
.####.###.
....#...G#

10 10
S.........
#########.
#.......#.
#..####.#.
##....#.#.
#####.#.#.
G.#.#.#.#.
#.#.#.#.#.
#.#.#.#.#.
#.....#...

4 5
S####
....#
#####
#...G

4 4
...S
....
....
.G..
*/