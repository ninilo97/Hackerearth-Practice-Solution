//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MX = 100000000;
//Do check the best submission it's insane

bool prime[MX+1];

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  memset(prime,true,sizeof(prime));
  for(int i = 2; i*i <= MX; ++i) if(prime[i]) for(int j = i*i; j <= MX; j+=i) prime[j] = false;
  prime[0] = false ,prime[1] = false;

  int t; cin>>t;
  while(t--){
    unsigned long long res=0; int x; cin>>x;
    for(int i=0,j=0;j<x;++i) if(prime[i]){ res+=i; j++; }
    cout<<res<<"\n";
  }
  return 0;
}
