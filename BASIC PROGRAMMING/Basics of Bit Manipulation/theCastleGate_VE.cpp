//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin>>t; while(t--){
    int n,res=0; cin>>n;
    for(int i=2;i<=n;++i) for(int j=1;j<i;++j) if((i^j)<=n) res++;
    cout<<res<<endl;
  }
  return 0;
}
