//@author Nikhil Londhe
#include <bits/stdc++.h>
using namespace std;

int main () {
    int n; cin >> n;
    unordered_map<int, int> mpp;
    vector<int> vec(n, -1);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
        mpp[vec[i]]++;
    }
    int k, mn = 1e9; cin >> k;
    for (int i = 0; i < n; ++i) {
        if (mpp[vec[i]] == k and vec[i] < mn) mn = vec[i];
    }
    cout << mn;
    return 0;
}
