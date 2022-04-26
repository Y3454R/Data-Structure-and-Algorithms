#include <bits/stdc++.h>

typedef long long ll;
#define endl '\n'

using namespace std;

int main() {
    ll i, k, n, x;
    cin >> k >> n;
    set <ll> st;
    for(i = k; i <= n; ++i) {
        st.insert(i);
    }
    for(auto it = st.begin(); it != st.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "input x: ";
    cin >> x;

    auto it = st.lower_bound(x);
    if(it == st.begin()) {
        cout << *it << endl;
    }
    else if(it == st.end()) {
        it--;
        cout << *it << "\n";
    }
    else {
        // uff bujhlam na :(
        int a = *it;
        it--;
        int b = *it;
        if(x-b < a-x)
            cout << b << endl;
        else
            cout << a << endl;
    }

    return 0;

}
