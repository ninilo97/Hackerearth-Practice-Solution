//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MX = 20;

ll arr[MX];

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  ll res=0,t,n; cin>>t>>n;
  for(int i=0;i<t;++i) cin>>arr[i];
  for(int i=1;i<(1<<t);++i){
    ll ans=1;
    for(int j=0;j<t;++j) if(i&(1<<j)) ans=(ans==1)?arr[j]:(ans/__gcd(ans,arr[j]))*arr[j];
    if(__builtin_popcount(i)&1) res+=(n/ans);
    else res-=(n/ans);
  }
  cout<<res;
  return 0;
}
