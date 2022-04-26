#include <bits/stdc++.h>

typedef long long ll;
#define endl '\n'

using namespace std;

int main() {
    ll n, m, i, j;
    cin >> n >> m;
    vector< vector<ll> > v(n, vector <ll> (m));
    for(i = 0; i < n; ++i) {
        for(j = 0; j < m; ++j) {
            cin >> v[i][j];
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    cout << v[0][1] << endl;
    return 0;
}