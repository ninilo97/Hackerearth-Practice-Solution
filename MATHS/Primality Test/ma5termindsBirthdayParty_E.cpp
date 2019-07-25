//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MX = 1000000;

int prime[MX+1], res[MX+1];

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  for(int i = 2; i*i <= MX; ++i) if(prime[i]==0) for(int j = i*i; j <= MX; j+=i) prime[j] = 1;
  prime[1] = 1 ,prime[4] = 0;

  for(int i=1;i<=MX;++i) res[i]=res[i-1]+prime[i];

  int t; cin>>t;
  while(t--){ int x,y; cin>>x>>y; cout<<res[y]-res[x-1]<<"\n"; }
  return 0;
}
