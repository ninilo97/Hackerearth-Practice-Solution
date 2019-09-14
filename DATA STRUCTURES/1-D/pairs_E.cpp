//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
const int MX = 1e5;

int arr[MX+1];
bool prime[MX+1];

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  memset(prime,true,sizeof(prime)); prime[0]=prime[1]=false;
  for(int i=2;i*i<=MX;++i) if(prime[i]) for(int j=(i<<1);j<=MX;j+=i) prime[j]=false;
  for(int i=1;i<=MX;++i) arr[i]=arr[i-1]+prime[i];

  int t; cin>>t; while(t--){
    int l,r,p; cin>>l>>r; p=(arr[r]-arr[l-1]); if(l==1) ++l;
    cout<<(p*(r-l-p+1))<<'\n';
  }
  return 0;
}
