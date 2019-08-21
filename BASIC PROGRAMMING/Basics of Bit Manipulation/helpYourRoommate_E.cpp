//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin>>t; while(t--){
    int x,res=0; cin>>x; while(x){ res++, x&=(x-1); }
    cout<<res<<endl;
  }
  return 0;
}
