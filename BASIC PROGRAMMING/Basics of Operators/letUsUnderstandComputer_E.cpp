//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MX = 1e6;

ll arr[MX+1];

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

  for(ll i=1,r=2;i<=MX;i++){ if(i>=r) r<<=1; arr[i]=(i*r)-1; }
  int t; cin>>t; while(t--){ ll x; cin>>x; cout<<x-(lower_bound(arr+1,arr+MX+1,x)-arr)+1<<'\n'; }
  return 0;
}
