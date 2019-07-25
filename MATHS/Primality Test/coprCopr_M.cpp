//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MX = 10000000;

double prime[MX+1];

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(14);
  for(int i=2;i<=sqrt(MX);++i) if(prime[i]==0) for(int j=i*i;j<=MX;j+=i) if(prime[j]==0) prime[j]=j;
  for(int i=2;i<=MX;++i){
    if(prime[i]==0){
      for(int j=2*i;j<=MX;j+=i) prime[j]*=(i-1.0)/i;
      prime[i]=i-1;
    }
  }
  prime[1]=1;
  for(int i=2;i<=MX;++i) prime[i]+=prime[i-1];
  int t; cin>>t; while(t--){ int n; cin>>n; cout<<prime[n]<<"\n"; }
  return 0;
}
