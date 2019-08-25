//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin>>t; while(t--){
    int n,res=0; cin>>n; while(n--){
      int x; cin>>x; if(x) res+=(1<<int(log2((-x&x))));
    }
    cout<<res<<endl;
  }
  return 0;
}
