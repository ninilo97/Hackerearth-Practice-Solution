//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
const int MX = 1e6;

int arr[MX+1],arrMx[MX+1];

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  int n; cin>>n;
  for(int i=0;i<n;++i) cin>>arr[i];
  for(int i=n-1;i>=0;--i) arrMx[i]=max(arr[i],arrMx[i+1]);
  for(int i=0;i<n;++i) if(arr[i]>=arrMx[i+1]) cout<<arr[i]<<' ';
  return 0;
}
