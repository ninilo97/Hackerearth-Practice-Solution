//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
const int MX = 1e5;
const int MOD = 1e9+7;
typedef long long ll;

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  int t; cin>>t; while(t--){
    ll n; cin>>n;
    ll arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    if(n>=63) cout<<"0\n";
    else{
      ll powerset=((1L<<n)>>1),res=0;
      for(auto a:arr) if(a>=powerset) res=((res%MOD)+(a%MOD))%MOD;
      cout<<res<<'\n';
    }
  }
  return 0;
}
