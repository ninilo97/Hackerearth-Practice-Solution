//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  int t; cin>>t; while(t--){
    int n,res=0,cnt=0; cin>>n; while(n--){
      int x; cin>>x;
      if(x&1){ res=max(res,cnt); cnt=0; }
      else cnt++;
    }
    res=max(res,cnt);
    cout<<(res?res:-1)<<'\n';
  }
  return 0;
}
