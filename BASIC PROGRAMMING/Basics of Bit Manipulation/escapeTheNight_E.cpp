//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9+7;

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin>>t; while(t--){
    ll n,res=0; cin>>n;
    for(ll i=1;(1LL<<i)<n;++i) for(ll j=0;j<i;++j){
      ll x=(1LL<<i)+(1LL<<j); if(x<=n) res=(res+x)%MOD;
    }
    cout<<res<<endl;
  }
  return 0;
}
