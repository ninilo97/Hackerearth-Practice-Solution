//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,cnt=0; cin>>n;
  bool prime[n+1];
  for(int i=0;i<=n;++i) prime[i]=true;
  prime[0]=false; prime[1]=false;
  for(int i=2;i*i<=n;++i) if(prime[i]) for(int j=i*i;j<=n;j+=i) prime[j]=false;
  for(int i=2;i<=n;++i) if(prime[i]) cnt++;
  cout<<cnt;
}
