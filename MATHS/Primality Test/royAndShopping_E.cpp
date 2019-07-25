//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MX = 1000000;

int prime[MX+1];

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  for(int i = 2; i <= MX; ++i) if(prime[i]==0) for(int j = i; j <= MX; j+=i) if(prime[j]==0) prime[j] = i;
  prime[0] = 0 ,prime[1] = 1;

  int t; cin>>t;
  while(t--){ int x; cin>>x; cout<<x-prime[x]<<"\n"; }
  return 0;
}
