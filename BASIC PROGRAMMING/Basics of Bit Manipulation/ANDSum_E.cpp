//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MX = 32;
const ll MOD = 1e9+7;

ll power(ll x,ll y){
  ll res=1;
  while(y>0){
    if(y%2==0){ y/=2; x=(x*x)%MOD; }
    else { y-=1; res=(res*x)%MOD; y/=2; x=(x*x)%MOD; }
  }
  return res;
}

ll arr[MX];

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  ll t; cin>>t; while(t--){
    memset(arr, 0, sizeof(arr));
    ll res=0,n; cin>>n; while(n--){
      ll x; cin>>x; for(ll i=0;i<32;++i) if(x&(1<<i)) arr[i]++;
    }
    for(ll i=0;i<32;++i){ ll x=arr[i]; if(x) res=(res+(((power(2,x)-1+MOD)%MOD*power(2,i))%MOD)+MOD)%MOD; }
    cout<<res<<endl;
  }
  return 0;
}
