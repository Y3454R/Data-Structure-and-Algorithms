#include <bits/stdc++.h>

typedef long long ll;
#define endl '\n'

using namespace std;

int main() {
    int x;
    stack<int> s;
    s.push(3);
    s.push(99);
    s.push(7);
    while(!s.empty()) {
        x = s.top();
        cout << x << endl;
        s.pop();
    }
}
