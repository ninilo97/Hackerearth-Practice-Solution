//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
const int MX = 1e5;

int arr[MX+1];

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n,q; cin>>n>>q; for(int i=1;i<=n;++i){ int x; cin>>x; arr[i]=arr[i-1]+bool(x&(x>>1)); }
  while(q--){ int l,r; cin>>l>>r; cout<<arr[r]-arr[--l]<<endl; }
  return 0;
}
