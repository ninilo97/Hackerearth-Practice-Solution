#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

void solve() {
	int n, m, x; cin >> n >> m; x = 1 << n;
	vector<int> res(n, 0);
	vector<vector<bool>> vec(x, vector<bool>(n, 0));
	map<pair<int, int>, bool> mpp;
	for (int i = 0; i < m; ++i) {
		int x, y; cin >> x >> y; --x; --y;
		mpp[make_pair(x, y)] = mpp[make_pair(y, x)] = true;
	}
	for (int i = 0; i < n; ++i) {
		vec[1 << i][i] = true;
	}
	for (int i = 0; i < x; ++i) {
		int len = __builtin_popcount(i);
		for (int j = 0; j < n; ++j) {
			if (i & (1 << j)) {
				for (int k = 0; k < n; ++k) {
					if (k != j and (i & (1 << k)) and mpp[make_pair(k, j)] and vec[i ^ (1 << j)][k]) {
						vec[i][j] = true;
						res[j] = max(res[j], len - 1);
					}
				}
			}
		}
	}
	for (auto r : res) cout << r << " "; cout << "\n";
	// int i = 0; for (auto row : vec) { cout << __builtin_popcount(i++) << "\t"; for (auto val : row) cout << val << " "; cout << "\n"; }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
	#endif
	int t; cin >> t; while (t--) {
		// cout << (solve() ? "YES\n" : "NO\n");
		// cout << solve() << "\n";
		solve();
	}
	return 0;
}
