//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9+7;
const int MX = 16;

ll arr[MX];

ll power(ll x, ll y){
    ll res=1;
    while(y>0){
        if(y&1) res=(res*x)%MOD;
        y>>=1, x=(x*x)%MOD;
    }
    return res;
}

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t,n; cin>>t; for(int testcase=1;testcase<=t;++testcase){
    ll res=0,resMul=1,resAdd=0; cin>>n;
    for(int i=0;i<n;++i) cin>>arr[i];
    for(int i=2;i<(1<<n);++i){
      if(__builtin_popcount(i)<2) continue;
      resMul=1,resAdd=0;
      for(int j=0;j<n;++j) if(i&(1<<j)){
        resMul=(resMul*arr[j])%MOD;
        resAdd=(resAdd+arr[j])%MOD;
      }
      ll temp = (resMul*(power(resAdd,MOD-2)%MOD))%MOD;
      res = temp > res ? temp : res;
    }
    cout<<"Case #"<<testcase<<": "<<res<<endl;
  }
  return 0;
}
