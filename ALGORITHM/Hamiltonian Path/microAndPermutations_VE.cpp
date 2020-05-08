#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

void solve() {
	int n, m, x; cin >> n >> m; x = 1 << n;
	vector<vector<int>> vec(x, vector<int>(n, 0));
	map<pair<int, int>, bool> mpp;
	for (int i = 0; i < m; ++i) {
		int x, y; cin >> x >> y; --x; --y;
		mpp[make_pair(x, y)] = mpp[make_pair(y, x)] = true;
	}
	for (int i = 0; i < n; ++i) {
		vec[1 << i][i] = 1;
	}
	for (int i = 0; i < x; ++i) {
		for (int j = 0; j < n; ++j) {
			if (i & (1 << j)) {
				for (int k = 0; k < n; ++k) {
					if (k != j and i & (1 << k) and mpp[make_pair(k, j)]) {
						vec[i][j] += vec[i ^ (1 << j)][k];
					}
				}
			}
		}
	}
	cout << accumulate(vec[x - 1].begin(), vec[x - 1].end(), 0);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
	#endif
	solve();
	return 0;
}
