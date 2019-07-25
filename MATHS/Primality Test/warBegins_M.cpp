//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MX = 5000000;
const int MOD = 100000007;

bool prime[MX+1];
int res[MX+1];

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  memset(prime,true,sizeof(prime));
  for(ll i = 2; i*i <= MX; ++i) if(prime[i]) for(ll j = i*i; j <= MX; j+=i) prime[j] = false;
  prime[0] = false ,prime[1] = false, prime[2] = false;

  for(ll i=0;i<=MX;i++) res[i]=prime[i]?(res[i-1]+(i>>1))%MOD:res[i-1];

  int t; cin>>t; while(t--){ ll x; cin>>x; cout<<res[x]<<"\n"; }

  return 0;
}
