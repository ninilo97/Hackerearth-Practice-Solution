//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  int t; cin>>t; while(t--){
    vector<ll> vec;
    ll res=0,n,p; cin>>n>>p;
    while(p--){ int x; cin>>x; vec.emplace_back(x); }
    int sz=vec.size();
    for(int i=1;i<(1<<sz);++i){
      ll ans=1;
      for(int j=0;j<sz;++j) if(i&(1<<j)) ans=(ans==1)?vec[j]:(ans/__gcd(ans,vec[j]))*vec[j];
      if(__builtin_popcount(i)&1) res+=(n/ans);
      else res-=(n/ans);
    }
    cout<<res<<"\n";
  }
  return 0;
}
