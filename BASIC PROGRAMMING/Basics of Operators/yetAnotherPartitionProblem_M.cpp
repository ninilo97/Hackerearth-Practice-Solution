//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
const int MX = 1e5;

int arr[MX+1];

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin>>t; while(t--){
    int xr=0,mx,n; cin>>n;
    for(int i=0;i<n;++i){ cin>>arr[i]; xr^=arr[i]; }
    mx=xr;
    for(int i=0,x=0;i<n;++i) x^=arr[i], mx=max(mx,x&(x^xr));
    cout<<mx<<'\n';
  }
  return 0;
}
