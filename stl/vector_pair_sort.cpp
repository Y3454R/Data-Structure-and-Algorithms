#include <bits/stdc++.h>

using namespace std;

bool sortBySecAsc(const pair <int,int> &a, const pair <int,int> &b) {
    return a.second < b.second;
}

bool sortByFirstThenSecAsc(const pair <int,int> &a, const pair <int,int> &b) {
    if(a.first == b.first)
        return a.second < b.second;
    else
        return a.first < b.first;
}

bool sortBySecDsc(const pair <int,int> &a, const pair <int,int> &b) {
    return a.second > b.second;
}

int main() {

    int i, j, k, n, x, y;
    cin >> n;
    vector < pair<int,int> > v;
    for(i = 0; i < n; ++i) {
        cin >> x  >> y;
        v.push_back(make_pair(x,y));
    }
    cout << "Check Input:" << endl;
    for(i = 0; i < n; ++i) {
        cout << v[i].first << " " << v[i].second << endl;
    }

    cout << "After sorting ascending by 1st:" << endl;
    sort(v.begin(), v.end());
    for(i = 0; i < n; ++i) {
        cout << v[i].first << " " << v[i].second << endl;
    }

    cout << "After sorting descending by 1st:" << endl;
    sort(v.rbegin(), v.rend());
    for(i = 0; i < n; ++i) {
        cout << v[i].first << " " << v[i].second << endl;
    }

    cout << "After sorting ascending by 2nd:" << endl;
    sort(v.begin(), v.end(), sortByFirstThenSecAsc);
    for(i = 0; i < n; ++i) {
        cout << v[i].first << " " << v[i].second << endl;
    }

    cout << "After sorting descending by 2nd:" << endl;
    sort(v.begin(), v.end(), sortBySecDsc);
    for(i = 0; i < n; ++i) {
        cout << v[i].first << " " << v[i].second << endl;
    }
}

/*
4
20 30
20 60
5 40
40 50
*/