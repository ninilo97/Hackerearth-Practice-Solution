//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin>>t; while(t--){
    int n,res=1e9; cin>>n; while(n--){ int x; cin>>x; res=min(res,__builtin_popcount(x)); }
    cout<<res<<endl;
  }
  return 0;
}
