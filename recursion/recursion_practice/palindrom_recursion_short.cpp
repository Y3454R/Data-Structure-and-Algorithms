#include <bits/stdc++.h>

using namespace std;

int isPali(char *s, int l, int r) {
    return ( (l >= r) || (s[l] == s[r] && isPali(s, l+1, r-1)) );
}

int main() {
    while(1) {
        char str[100];
        cin >> str;
        if(isPali(str, 0, strlen(str)-1)) {
            cout << "Palindrome\n";
        }
        else {
            cout << "Not palindrome\n";
        }
    }
}
