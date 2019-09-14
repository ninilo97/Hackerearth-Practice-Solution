//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  int t; cin>>t; while(t--){
    int n,mx=1e9,res=0; cin>>n; while(n--){
      int x; cin>>x; if(x<=mx){ res++; mx=x; }
    }
    cout<<res<<'\n';
  }
  return 0;
}
