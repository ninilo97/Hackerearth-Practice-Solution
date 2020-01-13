//@author Nikhil Londhe
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, a, b;

ll sqr(ll x) { return x * x; }
ll calc(ll x) { return (a * sqr(x)) + (b * sqr(n - x)); }

ll findMin() {
    ll l = 0, r = n, mx = 1e17;
    while(l <= r) {
        ll mid = l + (r - l) / 2, x = calc(mid);
        if (x < calc(mid + 1)) {
            mx = x;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return mx;
}

int main () {
    // cin >> n >> a >> b; for (int i = -1; i < 2 * n; ++i) cout << i << "\t" << calc(i) << "\n";
    ll t; cin >> t; while (t--) {
        cin >> n >> a >> b; cout << findMin() << "\n";
    }
    return 0;
}
