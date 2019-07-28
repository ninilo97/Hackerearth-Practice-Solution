//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MX = 1e5;

int arr[MX+1];

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n,q; cin>>n>>q;
  for(int i=0;i<n;++i) cin>>arr[i];
  while(q--){
    int x; cin>>x;
    if(x==1){ int idx; cin>>idx; cin>>arr[idx]; }
    else{ int l,r; cin>>l>>r; cout<<accumulate(arr+l,arr+(++r),0)<<"\n"; }
  }
  return 0;
}
