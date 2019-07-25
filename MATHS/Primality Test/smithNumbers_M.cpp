//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MX = 1000000;

int prime[MX+1],sOD[MX+1],smith[MX+1];

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  for(ll i=2;i*i<=MX;i++) if(prime[i]==0) for(ll j=i*i;j<=MX;j+=i) if(prime[i]==0) prime[j]=i;
  for(ll i=1;i<=MX;i++) if(prime[i]==0) prime[i]=i;

  for(ll i=1;i<=MX;i++){
    if(i%10==0){ ll n=i; while(n){ sOD[i]+=n%10; n/=10; }}
    else sOD[i]=sOD[i-1]+1;
  }

  for(int i=1;i<=MX;i++){
    ll sum=0,j=i; while(j>1){ sum+=sOD[prime[j]]; j/=prime[j]; }
    smith[i]=sum==sOD[i]?smith[i-1]+1:smith[i-1];
  }

  int t; cin>>t; while(t--){ int l,r; cin>>l>>r; cout<<smith[r]-smith[l-1]<<"\n"; }
  return 0;
}
