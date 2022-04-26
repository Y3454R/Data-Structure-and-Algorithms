#include <bits/stdc++.h>

typedef long long ll;
#define endl '\n'

using namespace std;

int main() {
    deque <int> dq;
    dq.push_back(5);
    dq.push_back(2);
    dq.push_front(99);
    dq.push_front(83);
    for(auto it = dq.begin(); it != dq.end(); it++)
        cout << *it << " ";
    cout << endl;
    dq.pop_back();
    for(auto it = dq.begin(); it != dq.end(); it++)
        cout << *it << " ";
    cout << endl;
    dq.pop_front();
    for(auto it = dq.begin(); it != dq.end(); it++)
        cout << *it << " ";
    cout << endl;
}