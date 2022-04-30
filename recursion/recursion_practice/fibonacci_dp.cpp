#include <bits/stdc++.h>

using namespace std;

vector <int> f(100);

int fibo (int n) {
    if(n == 1)
        f[n] = 0;
    else if(n == 2 || n == 3)
        f[n] = 1;
    else if(f[n] == 0) {
        f[n] = fibo(n-1) + fibo(n-2);
    }
    return f[n];
}

int main() {
    while(1) {
        int x;
        cin >> x;
        cout << fibo(x) << endl;
    }

}

/*
The Fibonacci sequence is as follows: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144,...
*/
