#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1000000007;
//Modular logic is correct, but the implementation of DS is horrible and is not recommended.
vector<ll> aFac, bFac;
unordered_map<ll,ll> aFacP, bFacP;

ll modMultiply(ll x, ll y){
  ll res=0; x%=MOD;
  while(y){
    if(y&1) res=(res+x)%MOD;
    x=(x<<1)%MOD, y>>=1;
  }
  return res;
}

ll power(ll x, ll y){
  ll res=1;
  while(y){
    if(y%2==0) { y>>=1, x=modMultiply(x,x); }
    else { res=modMultiply(res,x), y>>=1, x=modMultiply(x,x);}
  }
  return res;
}

void findFac(ll a, ll b, ll c){
  aFac.clear(), bFac.clear(), aFacP.clear(), bFacP.clear();
  for(ll i=2;i*i<=a;++i){
    while(a%i==0){
      if(aFacP[i]==0) aFac.emplace_back(i);
      aFacP[i]++, a/=i;
    }
  }
  if(a!=1) { aFac.emplace_back(a),aFacP[a]++; }
  for(ll i=2;i*i<=b;++i){
    while(b%i==0){
      if(bFacP[i]==0) bFac.emplace_back(i);
      bFacP[i]++, b/=i;
    }
  }
  if(b!=1) { bFac.emplace_back(b),bFacP[b]++; }
  for(auto i:bFac) bFacP[i] = bFacP[i]*c;
}

ll negDel(ll a){
  if(a>=0) return a;
  return 0;
}

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin>>t;
  while(t--){
    ll a,b,c,res=1; cin>>a>>b>>c; c%=MOD-1; findFac(a,b,c);
    for(auto i:bFac) { bFacP[i] = negDel(bFacP[i]-aFacP[i]); res=(res * power(i,bFacP[i]))%MOD; }
    cout<<res<<"\n";
  }
  return 0;
}
