//@author Nikhil Londhe
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int MX = 1000000;

bool prime[MX+1];
ll sumPrime[MX+1];

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);


  memset(prime,true,sizeof(prime));
  for(int i = 2; i*i <= MX; ++i) if(prime[i]) for(int j = i*i; j <= MX; j+=i) prime[j] = false;
  prime[0] = false ,prime[1] = false, sumPrime[0]=0;

  for(int i=1;i<=MX;++i){ sumPrime[i]+=sumPrime[i-1]; if(prime[i]) sumPrime[i]+=i; }

  int t; cin>>t;
  while(t--){
    ll l,r,res=0; cin>>l>>r;
    if(l==r){ cout<<sumPrime[r]-sumPrime[l-1]<<"\n"; continue; }
    if(prime[l]) res=l;
    res+=sumPrime[r]-sumPrime[l];
    cout<<res<<"\n";
  }
  return 0;
}
