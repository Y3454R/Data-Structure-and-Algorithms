#include <bits/stdc++.h>

using namespace std;

int fibo(int n) {
    if(n == 1)
        return 0;
    if(n == 2 || n == 3)
        return 1;
    return fibo(n-1)+fibo(n-2);
}

int main() {
    int x;
    cin >> x;
    cout << fibo(x) << endl;
}

/*
The Fibonacci sequence is as follows: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144,...
*/