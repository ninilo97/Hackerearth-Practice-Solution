//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MX = 1e5;

int arr[MX];

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  int t; cin>>t; while(t--){
    ll n,k,mx=0,res=0; cin>>n>>k;
    for(int i=0;i<n;++i) cin>>arr[i];
    for(int i=0;i<n;++i){ ll x; cin>>x; mx=max(x,mx); } mx++;
    for(int i=0;i<n;++i) if(arr[i]<mx) res+=(mx-arr[i]);
    cout<<(res*k)<<'\n';
  }
  return 0;
}
