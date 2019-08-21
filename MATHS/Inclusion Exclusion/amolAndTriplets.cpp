//@author Nikhil Londhe
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

vec<ll> vec;
unordered_map<ll,ll> mpp;

ll fact[MX+1],inv[MX+1];

ll modMultiply(ll a, ll b){
  ll res = 0; a %= MOD;
  while(b){
    if(b & 1) res = (res + a) % MOD;
    a = (a<<1) % MOD, b>>=1;
  }
  return res;
}

ll power(ll x, ll y){
  ll res=1;
  while(y>0){
    if(y&1) res=modMultiply(res,x);
    y>>=1, x=modMultiply(x,x);
  }
  return res;
}

int main(){
  ios_base.sync_with_stdio(0), cin.tie(0), cout.tie(0);

  fact[0]=1,inv[0]=1,inv[1]=1;
  for(int i=1;i<=MX;++i) fact[i]=(fact[i-1]*i)%MOD;
  for(int i=2;i<=MX;++i) inv[i]=(-(MOD/i)*inv[MOD%i])%MOD+MOD;
  for(int i=2;i<=MX;++i) inv[i]=(inv[i]*inv[i-1])%MOD;

  int n; cin>>n;
  for(ll i=0;i<n;++i){ int x; cin>>x; mpp[x]++; vec.emplace_back(x); }
  unique(vec.begin(),vec.end());
  sort(vec.begin(),vec.end());

  cout<<fact[vec.size()]*(inv[])

  return 0;
}
