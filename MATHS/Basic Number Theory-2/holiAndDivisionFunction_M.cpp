//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MX = 1e5;

ll arr[MX+1],pre[MX+1];

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t; cin>>t; while(t--){
    memset(arr,0,sizeof(arr));
    memset(pre,0,sizeof(pre));

    ll n,mx=0,ans=0; cin>>n;
    for(int i=1;i<=n;++i){ cin>>arr[i]; pre[arr[i]]++; mx=max(mx,arr[i]); }
    for(int i=1;i<=MX;++i) pre[i]+=pre[i-1];

    for(ll i=1;i<=n;++i){
      ll tmp=arr[i],cnt=1;
      for(double j=0.5;;++j,++cnt){
        ll x=j*tmp,y=(j+1)*tmp;
        if(tmp%2==0) --x, --y;
        if(x>mx) break;
        ans += cnt*(pre[min(y,mx)]-pre[x]);
      }
    }
    cout<<ans<<'\n';
  }
  return 0;
}
