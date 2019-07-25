//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MX = 1000000;

int primePrime[MX+1];
bool prime[MX+1];

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  memset(prime,true,sizeof(prime));
  for(int i = 2; i*i <= MX; ++i) if(prime[i]) for(int j = i*i; j <= MX; j+=i) prime[j] = false;
  prime[0] = false ,prime[1] = false;

  for(int i=1;i<=MX;++i){
    if(prime[i]) primePrime[i]++;
    primePrime[i]+=primePrime[i-1];
  }

  for(int i=1,cnt=0;i<=MX;++i){
    if(prime[primePrime[i]]) primePrime[i]=++cnt;
    else primePrime[i]=cnt;
  }

  int t; cin>>t;
  while(t--){ int x,y; cin>>x>>y; cout<<primePrime[y]-primePrime[x-1]<<"\n"; }
  return 0;
}
