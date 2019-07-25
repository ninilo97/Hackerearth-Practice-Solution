//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
const int MX = 1000000;

bool prime[MX+1];

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  memset(prime,true,sizeof(prime));
  for(int i = 2; i*i <= MX; ++i) if(prime[i]) for(int j = i*i; j <= MX; j+=i) prime[j] = false;
  prime[0] = false ,prime[1] = false;

  int t; cin>>t;
  while(t--){
    int n,k,res=0,cnt=1; cin>>n>>k;
    while(n--){ int x; cin>>x; if(prime[x] and cnt++%k==0) res+=x; }
    cout<<res<<"\n";
  }
  return 0;
}
