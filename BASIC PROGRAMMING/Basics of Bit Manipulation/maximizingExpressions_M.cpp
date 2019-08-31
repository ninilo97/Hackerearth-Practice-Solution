//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MX = 1e5;

ll arr[MX];

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  ll res=0; int n; cin>>n;
  for(int i=0;i<n;++i) cin>>arr[i];
  for(int i=0;i<n;++i){ ll x; cin>>x; arr[i]^=x; }
  for(int i=0;i<n;++i){ ll x; cin>>x; res+=(~arr[i]&x)?(arr[i]^(~arr[i]&x)):(arr[i]^(x&-x)); }
  cout<<res;
  return 0;
}
