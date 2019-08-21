//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9+7;
const int MX = 1e6;

ll fact[MX+1],inv[MX+1];
unordered_map<int,int> mpp;

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
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  fact[0]=1,inv[0]=1,inv[1]=1;
  for(int i=1;i<=MX;++i) fact[i]=(fact[i-1]*i)%MOD;
  for(int i=2;i<=MX;++i) inv[i]=(-(MOD/i)*inv[MOD%i])%MOD+MOD;
  for(int i=2;i<=MX;++i) inv[i]=(inv[i]*inv[i-1])%MOD;

  int t; cin>>t; while(t--){
    ll k,n,l; string str; cin>>k>>n>>str; l=str.size()*n;
    if(k<l) cout<<"0\n";
    else{ l=k-l; cout<<((fact[26+(l-1)]*((inv[26+(l-1)-l]*inv[l])%MOD))%MOD)<<"\n"; }
  }
  return 0;
}
