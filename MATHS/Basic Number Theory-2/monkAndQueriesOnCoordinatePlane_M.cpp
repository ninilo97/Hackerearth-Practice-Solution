#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1000000007;

vector<ll> vec;
unordered_map<ll,int> mpp;

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin>>t;
  for(int i=0;i<t;++i){
      ll a,b,c,d; cin>>a>>b>>c>>d;
      ll x = __gcd(abs(a-c),abs(b-d))+1;
      vec.emplace_back(x);
      if(mpp[x]==0) mpp[x]=i+1;
  }
  sort(vec.begin(),vec.end());

  int q; cin>>q;
  while(q--){
    ll n; cin>>n;
    auto it = lower_bound(vec.begin(),vec.end(),n);
    if(it==vec.end()) { cout<<"-1\n"; continue; }
    else cout<<mpp[*it]<<"\n";
  }
  return 0;
}
