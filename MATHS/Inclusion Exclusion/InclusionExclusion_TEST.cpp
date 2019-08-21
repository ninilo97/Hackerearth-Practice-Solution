//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int arr[] = {2,3,11,13};

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  ll res=0,n; cin>>n; int sz=sizeof(arr)/sizeof(0);
  for(int i=1;i<(1<<sz);++i){
    ll ans=1;
    for(int j=0;j<sz;++j) if(i&(1<<j)) ans*=arr[j];
    if(__builtin_popcount(i)&1) res+=(n/ans);
    else res-=(n/ans);
  }
  cout<<res/__gcd(n,res)<<" "<<n/__gcd(n,res);
  return 0;
}
