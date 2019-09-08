//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
const int MX = 1e5;

int arr[MX+1];

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  int n; cin>>n;
  for(int i=0;i<n;++i) cin>>arr[i];
  for(int i=0;i<n;++i){ int x; cin>>x; cout<<(arr[i]+x)<<' '; }
  return 0;
}
