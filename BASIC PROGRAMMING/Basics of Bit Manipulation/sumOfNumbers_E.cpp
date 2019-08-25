//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
const int MX = 15;

int arr[MX];

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin>>t; while(t--){
    int n,s,res;
    cin>>n; for(int i=0;i<n;++i) cin>>arr[i];
    cin>>s; for(int i=0;i<(1<<n);++i){
      res=0; for(int j=0;j<n;++j) if(i&(1<<j)) res+=arr[j];
      if(res==s) break;
    }
    (res==s)?cout<<"YES\n":cout<<"NO\n";
  }
  return 0;
}
