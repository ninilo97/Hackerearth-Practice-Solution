//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1000003;
const int MX = 2000;

ll phi[MOD+4],arr[MX+1],summation[MOD+4];
unsigned long long summ[MOD+4];

long long modMultiply(long long a, long long b){
  long long res = 0; a %= MOD;
  while(b){
    if(b & 1) res = (res + a) % MOD;
    a = (2 * a) % MOD, b>>=1;
  }
  return res;
}

long long power(long long x, long long y){
  long long res=1;
  while(y>0){
    if(y%2==0) { y/=2; x=modMultiply(x,x); }
    else { y-=1; res=modMultiply(res,x); y/=2; x=modMultiply(x,x); }
  }
  return res;
}

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

  for(ll i=1;i<=MOD+3;++i) phi[i] = i;
  for(ll p=2;p<=MOD+3;++p){
    if(phi[p]==p){
      phi[p]=p-1;
      for(ll i=2*p;i<=MOD+3;i+=p) phi[i]=(phi[i]/p)*(p-1);
    }
  }

  summ[0] = 0;
  for(ll i = 1; i <= MOD+3; i++) summ[i] = summ[i-1]+i;

  ll modI2 = power(2,MOD-2);
  for(ll i=2;i<=MOD+3;++i) summation[i]=(summ[i]-(modMultiply(modMultiply(i,phi[i]),modI2)))%MOD;
  summation[1]=1;

  int t; cin>>t;
  while(t--){
    int n,q; cin>>n>>q;
    for(int i=1;i<=n;++i){ int tmp; cin>>tmp; arr[i]=summation[tmp]; }
    while(q--){
      int type; cin>>type;
      if(type==1){ int l,r; cin>>l>>r; cout<<*max_element(arr+l,arr+r+1)<<"\n";}
      else{ int id; cin>>id; arr[id] = summation[arr[id]]; }
    }
  }
  return 0;
}
