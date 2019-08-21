//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll mpp[4];

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  ll n,res=0; cin>>n;
  for(int i=0;i<n;++i){ ll x; cin>>x; if(x<4) mpp[x]++; }
  ll a=mpp[1],b=mpp[2],c=mpp[3],d=n-a-b-c;
  res = (a*(a-1)*(a-2))>>1;
  res += a*(a-1)*b;
  res += ((a*(a-1))>>1)*(d+c);
  res += ((b*(b-1))>>1)*a;
  res += a*b*c;
  cout<<res;
  return 0;
}














/*
  ll res=0,a=mpp[1],b=mpp[2],c=mpp[3];
  if(a>2) res += 3*((fact[a]*((inv[3]*inv[a-3])%MOD))%MOD);
  if(a>1){res += b*2*((fact[a]*((inv[2]*inv[a-2])%MOD))%MOD);
      res += (n-a-b)*((fact[a]*((inv[2]*inv[a-2])%MOD))%MOD);}
  if(b>1) res += a*((fact[b]*((inv[2]*inv[b-2])%MOD))%MOD);
  res += a*b*c;
  cout<<res;
*/
