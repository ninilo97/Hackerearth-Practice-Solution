//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
const int MX = 1000000;
const long long Inf = 1e9;
bool prime[MX+1];

template<class T> void ckmin(T &a, T b) { a = min(a, b); }
template<class T> void ckmax(T &a, T b) { a = max(a, b); }

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  memset(prime,true,sizeof(prime));
  for(int i = 2; i*i <= MX; ++i) if(prime[i]) for(int j = i*i; j <= MX; j+=i) prime[j] = false;
  prime[0] = false ,prime[1] = false;

  int t, mx=-Inf, mn=Inf; cin>>t;
  while(t--){ int x; cin>>x; if(prime[x]){ ckmin(mn,x); ckmax(mx,x); } }
  if(mx==-Inf or mn==Inf){ cout<<"-1"; }
  else{ cout<<mx-mn; }
  return 0;
}
