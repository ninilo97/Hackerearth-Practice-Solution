//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  int j=1,n,k; cin>>n>>k;
  ll res=0, arr[n+1];
  for(ll i=0;i<n;++i) cin>>arr[i];
  for(int i=0;i<n;i+=j){
    j=1; res+=abs(arr[i]);
    if(arr[i]>0){
      for(;j<=k and i+j<=n;++j){
        if(arr[i+j]<0) res+=arr[i+j];
        else break;
      }
    }
  }
  cout<<abs(res);
  return 0;
}
