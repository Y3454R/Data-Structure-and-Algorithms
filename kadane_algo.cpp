#include <bits/stdc++.h>

typedef long long ll;
#define endl '\n'

using namespace std;

int main() {
    ll n, i, j, sum, ans;
    cin >> n;
    ll a[n];
    ans = LLONG_MIN;
    sum = 0;
    for(i = 0; i < n; ++i) {
        cin >> a[i];
        sum = max(a[i], sum+a[i]);
        ans = max(sum, ans);
    }
    cout << ans;
}

/*
8
-1 2 4 -3 5 2 -5 2
*/