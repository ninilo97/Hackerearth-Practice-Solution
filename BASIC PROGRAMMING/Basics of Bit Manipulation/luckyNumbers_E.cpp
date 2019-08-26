//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9+7;

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin>>t; while(t--){
    ll n,res=0; cin>>n;
    for(ll i=2;i<=n;i<<=1){
      for(ll j=1;j<i;j<<=1){
        if(i+j<=n) res=(res+(i+j)%MOD)%MOD;
      }
    }
    cout<<res<<endl;
  }
  return 0;
}
