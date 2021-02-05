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
long long n;

int solve() {

    return 0;
}

int main() {

    solve();

    return 0;
}
