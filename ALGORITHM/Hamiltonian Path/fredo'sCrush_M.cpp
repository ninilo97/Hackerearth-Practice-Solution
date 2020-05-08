#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int calc(int x) {
	int i = 1, res = 0;
	while (x) {
		if (x & 1) res += i;
		x >>= 1; i++;
	}
	return res;
}

void solve() {
	int n, m, x; cin >> n >> m; x = 1 << n;
	if (!m) { cout << n << " " << 1 << "\n"; return; }
	vector<vector<int>> vec(x, vector<int>(n, 0));
	vector<int> pathLenght(n, 0), res(n, 0);
	map<pair<int, int>, bool> mpp;
	for (int i = 0; i < m; ++i) {
		int x, y; cin >> x >> y; --x; --y;
		mpp[make_pair(x, y)] = mpp[make_pair(y, x)] = true;
	}
	for (int i = 0; i < n; ++i) {
		vec[1 << i][i] = 1; res[i] = i + 1;
	}
	for (int i = 0; i < x; ++i) {
		int pL = __builtin_popcount(i), r = calc(i);
		for (int j = 0; j < n; ++j) {
			if (i & (1 << j)) {
				for (int k = 0; k < n; ++k) {
					if (k != j and i & (1 << k) and mpp[make_pair(k, j)] and vec[i ^ (1 << j)][k]) {
						vec[i][j]++;
						if (pathLenght[j] <= pL) {
							pathLenght[j] = pL;
							res[j] = max(res[j], r);
						}
					}
				}
			}
		}
	}
	// for (auto r : res) cout << r << " "; cout << "\n";
	int mx = *max_element(res.begin(), res.end()), mn = *min_element(res.begin(), res.end());
	int gcd = __gcd(mn, mx);
	cout << mx / gcd << " " << mn / gcd << "\n";
	// for (auto row : vec) { for (auto val : row) cout << val << " "; cout << "\n"; }
	// cout << accumulate(vec[x - 1].begin(), vec[x - 1].end(), 0);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
	#endif
	int t; cin >> t; while (t--) {
		solve();
	}
	return 0;
}
