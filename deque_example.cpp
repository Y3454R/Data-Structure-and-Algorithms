// https://codeforces.com/problemset/problem/1669/G

#include <bits/stdc++.h>

typedef long long ll;
#define endl '\n'

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int n, m, i, j, x;
        cin >> n >> m;
        vector < vector <char>> g(n, vector <char> (m));
        for(i = 0; i < n; ++i) {
            for(j = 0; j < m; ++j) {
                cin >> g[i][j];
            }
        }
        for(j = 0; j < m; ++j) {
            deque <int> pos;
            for(i = n-1; i >= 0; --i) {
                if(g[i][j] == '.') {
                    pos.push_back(i);
                }
                else if(g[i][j] == '*') {
                    if(!pos.empty()) {
                        x = pos.front();
                        pos.pop_front();
                        g[x][j] = '*';
                        g[i][j] = '.';
                        pos.push_back(i);
                    }
                }
                else if(g[i][j] == 'o') {
                    pos.clear();
                }
            }
        }
        for(i = 0; i < n; ++i) {
            for(j = 0; j < m; ++j) {
                cout << g[i][j];
            }
            cout << endl;
        }
        //cout << endl; // for debug
    }
}