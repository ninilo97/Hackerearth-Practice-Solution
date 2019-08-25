//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
const int MX = 1e5;

int arr[MX];

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n,k; cin>>n>>k; k=min(96,k);
  for(int i=0;i<n;++i) cin>>arr[i];
  for(int i=0;i<k;++i) for(int j=n-1;j>=i+1;--j) arr[j]|=arr[j-1];
  for(int i=0;i<n;++i) cout<<arr[i]<<" ";
  return 0;
}
