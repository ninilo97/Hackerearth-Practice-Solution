//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

long long modMultiply(long long a, long long b, long long MOD){
  long long res = 0; a %= MOD;
  while(b){
    if(b & 1) res = (res + a) % MOD;
    a = (2 * a) % MOD, b>>=1;
  }
  return res;
}

long long power(long long x, long long y, long long MOD){
  long long res=1;
  while(y>0){
    if(y%2==0) { y/=2; x=modMultiply(x,x,MOD); }
    else { y-=1; res=modMultiply(res,x,MOD); y/=2; x=modMultiply(x,x,MOD); }
  }
  return res;
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  int t; cin>>t;
  while(t--){
      unsigned long long a,d,p; cin>>a>>d>>p; if(d%p==0){cout<<"-1\n"; continue;}
      a%=p; d%=p; d=power(d,p-2,p);
      ll ans = modMultiply(-a,d,p); ans<0?cout<<ans+p<<"\n":cout<<ans<<"\n";
  }
  return 0;
}
