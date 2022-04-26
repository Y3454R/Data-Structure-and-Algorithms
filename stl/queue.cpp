#include <bits/stdc++.h>

typedef long long ll;
#define endl '\n'

using namespace std;

int main() {
    int x;
    queue<int> q;
    q.push(3);
    q.push(5);
    q.push(53);
    x = q.front();
    cout << x << endl;
    q.pop();
    cout << q.front() << endl;
    cout << endl;
}
