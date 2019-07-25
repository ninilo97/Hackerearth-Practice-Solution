//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MX = 1e6;

bool prime[MX+1];

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  memset(prime,true,sizeof(prime)); prime[0]=false,prime[1]=false;
  for(int i=2;i*i<=MX;++i) if(prime[i]) for(int j=i*i;j<=MX;j+=i) prime[j]=false;
  int t; cin>>t; while(t--){
    int x; cin>>x; if(x<5){ cout<<"No\n"; continue; }
    if(x&1){ cout<<x<<" = 2 + "<<x-2<<"\n"; }
    else{ for(int i=3;i<=x;i++) if(prime[i] and prime[x-i]){ cout<<x<<" = "<<i<<" + "<<x-i<<"\n"; break; }}
  }
  return 0;
}
