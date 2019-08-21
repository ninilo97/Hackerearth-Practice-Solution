//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9+7;
const int MX = 2*1e6;

ll fact[MX+1],inv[MX+1];

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  fact[0]=1,inv[0]=1,inv[1]=1;
  for(int i=1;i<=MX;++i) fact[i]=(fact[i-1]*i)%MOD;
  for(int i=2;i<=MX;++i) inv[i]=(-(MOD/i)*inv[MOD%i])%MOD+MOD;
  for(int i=2;i<=MX;++i) inv[i]=(inv[i]*inv[i-1])%MOD;
  ll k;
  int n,m,t;
  cin>>t;
  while(t--){
    cin>>n>>m; k=n*m;
    cout<<(inv[k]*((fact[k<<1]*inv[k])%MOD))%MOD-1<<"\n";
  }
  return 0;
}
