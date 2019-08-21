//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9+7;
const int MX = 1e6;

ll fact[MX+1],inv[MX+1];

ll mM(ll a, ll b){
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
    if(y&1) res=mM(res,x);
    y>>=1, x=mM(x,x);
  }
  return res;
}

int main(){
  fact[0]=1;inv[0]=1;inv[1]=1;
  for(int i=1;i<=MX;++i) fact[i]=(fact[i-1]*i)%MOD;
  for(int i=2;i<=MX;++i) inv[i]=(-(MOD/i)*inv[MOD%i])%MOD+MOD;
  for(int i=2;i<=MX;++i) inv[i]=(inv[i]*inv[i-1])%MOD;

  int t; cin>>t; while(t--){
    ll n,k; cin>>n>>k;
    ll res = (fact[n]*((inv[n-k]*inv[k])%MOD))%MOD;
    res=(res*(power(2,k)%MOD))%MOD;
    cout<<res<<"\n";
  }
  return 0;
}
