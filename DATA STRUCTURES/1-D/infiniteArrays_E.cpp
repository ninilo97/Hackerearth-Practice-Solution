//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9+7;

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  int t; cin>>t; while(t--){
    int n; cin>>n; ll arr[n+1]={0},arrSum[n+1]={0};
    for(int i=1;i<=n;++i){ cin>>arr[i]; arrSum[i]=arrSum[i-1]+arr[i]; }
    ll sum = arrSum[n];

    int q; cin>>q; ll ql[q+1]={0},qr[q+1]={0};
    for(int i=1;i<=q;++i) cin>>ql[i];
    for(int i=1;i<=q;++i) cin>>qr[i];
    for(int i=1;i<=q;++i){
      ll res=0, l=ql[i], r=qr[i], test=(((r-1)/n)-((l-1)/n));
      r=((r-1)%n)+1;
      l=((l-1)%n);
      res+=((sum%MOD)*(test%MOD))%MOD;
      res+=((arrSum[r]-arrSum[l])%MOD+MOD)%MOD;
      if(res<0) res=(res+MOD)%MOD;
      cout<<(res%MOD)<<' ';
    }
    cout<<'\n';
  }
  return 0;
}
