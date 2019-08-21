//@author Nikhil Londhe
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int MOD = 1e9+7;
const int MX = 1e5;

ll res[MX+1], vec[MX+1];

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  int t; cin>>t; while(t--){
    ll mx=-1,ans=0; int n; cin>>n;
    for(ll i=0;i<n;++i){ cin>>vec[i]; }
    for(ll i=0;i<n;++i){ mx=max(mx,vec[i]); res[i]=mx-vec[i]; }
    for(ll i=n-1,mx=-1;i>=0;--i){ mx=max(mx,vec[i]); ans+=min(res[i],mx-vec[i])%MOD; }
    cout<<(ans%MOD)<<"\n";
  }
  return 0;
}

