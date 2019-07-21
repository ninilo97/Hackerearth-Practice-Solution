//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MX = 1e6;

ll arr[MX];

int main(){
  ll n,q,sum=0; cin>>n>>q;
  for(int i=1;i<=n;++i){ int x; cin>>x; sum+=x; arr[i]=sum; }
  while(q--){
    int x,y; cin>>x>>y; cout<<((arr[y]-arr[x-1])/(y-x+1))<<"\n";
  }
  return 0;
}
