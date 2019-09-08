//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
const int MX = 1e6;

int arr[MX+1];

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  int n,q,t,l,r; cin>>n>>q; for(int i=1;i<=n;++i) cin>>arr[i];
  while(q--){
    cin>>t;
    if(t){ cin>>l; arr[l]^=1; }
    else { cin>>l>>r; cout<<(arr[min(r,n)]?"ODD":"EVEN")<<'\n'; }
  }
  return 0;
}
