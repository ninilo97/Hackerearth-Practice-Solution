//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
const int MX = 1e4;

bool prime[MX+1];

int main(){
  memset(prime,true,sizeof(prime));
  for(int i = 2; i*i <= MX; ++i) if(prime[i]) for(int j = i*i; j <= MX; j+=i) prime[j] = false;
  prime[0] = false ,prime[1] = false;

  int x,y; cin>>x>>y;
  for(int i=x;i<=y;++i) if(prime[i]) cout<<i<<" ";
  return 0;
}
