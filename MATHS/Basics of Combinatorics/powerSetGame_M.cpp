//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9+7;

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
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  int t; cin>>t; while(t--){
    ll res=0,n; cin>>n;
    res=(res+power(4,n))%MOD;
    res=(res-power(2,n))%MOD;
    res=res<0?res+MOD:res;
    cout<<res<<"\n";
  }
  return 0;
}
