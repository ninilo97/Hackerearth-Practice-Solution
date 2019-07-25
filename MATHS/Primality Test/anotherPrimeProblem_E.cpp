//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
const int MX = 1e6;

bool prime[2*MX];//2*MX for n=1000000

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  memset(prime,true,sizeof(prime));
  for(int i = 2; i*i <= MX; ++i) if(prime[i]) for(int j = i*i; j <= MX; j+=i) prime[j] = false;
  for(int i = 2; i <= MX; ++i) if(prime[i] and i%11!=1) prime[i]=false;
  prime[0] = false ,prime[1] = false;

  int t; cin>>t;
  while(t--){
      int n; cin>>n;
      for(int i=n; i<=MX; ++i) if(prime[i]) { cout<<i<<"\n"; break; }
  }
  return 0;
}
