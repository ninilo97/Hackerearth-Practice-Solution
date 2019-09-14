//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
const int MX = 1e6;

int arr[MX+1];

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  int t; cin>>t; while(t--){
    int n; cin>>n; memset(arr,0,sizeof(arr));
    for(int i=0;i<n;++i){ int x; cin>>x; arr[x]++; }
    for(int i=0;i<MX;++i) if(arr[i]==1){ cout<<i<<'\n'; break; }
  }
  return 0;
}
