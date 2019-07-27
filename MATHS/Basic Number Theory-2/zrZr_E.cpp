#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t; cin>>t;
  while(t--){
    ll n,res=0; cin>>n; for(ll i = 5; n/i >= 1; i*=5) res += n/i;
    cout<<res<<"\n";
  }
  return 0;
}
