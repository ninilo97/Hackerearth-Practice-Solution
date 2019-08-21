#include<bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

int GCD(int A, int B) { return B == 0? A : GCD(B, A % B); }

int main(){
  vector<int> vec;
  long long res=1,ans=1;
  int n,g; cin>>n;
  for(int i=0;i<n;++i) { int x; cin>>x; vec.emplace_back(x); }
  g = vec[0];
  for(auto i:vec) g = GCD(g,i);
  for(auto i:vec) res=(res*i)%MOD;
  for(int i=0;i<g;++i) ans=((ans%MOD)*(res%MOD))%MOD;
  cout<<ans;
}
