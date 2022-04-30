#include <bits/stdc++.h>

using namespace std;

int sum_recur(int n) {
    if(n == 0)
        return 0;
    return (sum_recur(n-1)+ n);
}

int main() {
    int x;
    cin >> x;
    cout << sum_recur(x) << endl;
}
