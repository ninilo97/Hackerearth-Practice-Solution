//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9+7;
const int MX = 1e5+1e5-2;

ll fact[MX+1],inv[MX+1];

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  fact[0] = 1,inv[0]=1,inv[1]=1;
  for(ll i=1;i<=MX;++i) fact[i] = (i*fact[i-1])%MOD; //Find factorial
  for(ll i=2;i<=MX;++i) inv[i] = (-(MOD/i)*inv[MOD%i])%MOD + MOD;//Find Inverse Modulo of i under MOD
  for(ll i=2;i<=MX;++i) inv[i] = (inv[i]*inv[i-1])%MOD;//Find factorial of Inverse Modulo of i under MOD

  int t; cin>>t; while(t--){
    ll res=0,n,m,k; cin>>n>>m>>k; while(k--){
      ll i,j,p; cin>>i>>j>>p;
      ll x1 = i+j-2;
      ll x2 = i-1;
      ll x3 = j-1;
      ll t1 = (fact[x1]*((inv[x2]*inv[x3])%MOD))%MOD;//Possible way to reach (i,j) from (1,1)
      ll y1 = n-i+m-j;
      ll y2 = n-i;
      ll y3 = m-j;
      ll t2 = (fact[y1]*((inv[y2]*inv[y3])%MOD))%MOD;//Possible way ro reach (n,m) from (i,j)
      res = (res + ((p*((t1*t2)%MOD))%MOD))%MOD;//All possible way to reach (n,m) from (1,1) passing from (i,j) multiplied by power
      //res = (res + mM(p,mM((fact[i+j-2]*(inv[i-1]*inv[j-1])%MOD)%MOD,(fact[n-i+m-j]*(inv[n-i]*inv[m-j])%MOD)%MOD)))%MOD; //TLE
    }
    cout<<res<<"\n";
  }
  return 0;
}
