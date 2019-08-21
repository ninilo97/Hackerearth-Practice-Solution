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
    a = (2 * a) % MOD, b>>=1;
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
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  fact[0]=1;
  for(ll i=1;i<=MX;++i) fact[i]=(fact[i-1]*i)%MOD;

  inv[MX]=power(fact[MX],MOD-2);
  for(ll i=MX-1;i>=0;--i) inv[i]=((i+1)%MOD*inv[i+1]%MOD)%MOD;

  ll t; cin>>t;
  while(t--){
    ll n,m,k;
    cin>>n>>m>>k;
    n-=(m-1)*k;
    if(n<m) cout<<"0\n";
    else cout<<(((fact[n]%MOD)*(inv[m]%MOD))%MOD*(inv[n-m]%MOD))%MOD<<"\n";
  }
  return 0;
}
