#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1000000007;

ll inc(ll m, ll n){
  ll a,b;
  a = (n/m) + m, b = (n/m) + 1 - m, a = ((a % MOD) * (b % MOD)), a %= MOD, a *= m, a %= MOD;
  return a;
}

ll sum(ll n){
  ll res;
  res = (((n % MOD) * ((n+1) % MOD)) % MOD) * (((2*n) %MOD + 1) % MOD), res %= MOD, res *= 166666668, res %= MOD;
  return res;
}

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  ll m,n,res=0; cin>>n;
  for(m=1;m*m<=n;++m){ res += inc(m,n), res %= MOD; }
  res -= sum(m-1);
  if(res<0) res += MOD;
  cout<<res;
  return 0;
}
