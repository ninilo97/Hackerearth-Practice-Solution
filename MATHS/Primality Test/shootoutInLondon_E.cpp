//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
const int MX = 100000;
const int Inf = 1e7;

int res[5*MX+1],vec[5*MX+1];

bool prime(int n){
  if(n==0 or n==1) return false;
  if(n!=2 and n%2==0) return false;
  for(int i=2; i*i<=n; ++i){ if(n%i==0) return false; }
  return true;
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  int t; cin>>t;
  for(int i=1;i<=t;++i){ int n; cin>>n; vec[i]=n; }

  int cur=Inf;
  for(int i=1;i<=t;++i){
    if(prime(vec[i])) cur=i;
    res[i]=cur;
  }
  for(int i=t;i>=1;--i){
    if(prime(vec[i])) cur=i;
    res[i]=abs(res[i]-i)<=abs(cur-i)?res[i]:cur;
  }
  for(int i=1;i<=t;++i) res[i]==Inf?cout<<"-1 ":cout<<res[i]<<" ";

  return 0;
}
