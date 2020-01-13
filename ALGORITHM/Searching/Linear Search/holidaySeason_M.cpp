//@author Nikhil Londhe
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int SZ = 26;

int mpp[SZ];

int main () {
    string str; int n; cin >> n >> str;
    ll res = 0, cur = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1, cur = 0; j < n; ++j) {
            if (str[i] == str[j]) {
                res += cur;
            }
            cur += mpp[str[j] - 'a'];
        }
        mpp[str[i] - 'a']++;
    }
    cout << res;
    return 0;
}
