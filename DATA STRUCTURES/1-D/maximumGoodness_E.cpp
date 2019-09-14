//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  int n,st=0,mx=0,mxx=0,res=0; cin>>n;
  for(int i=1;i<=n;++i){
    int x; cin>>x; mx+=(x?x:-1);
    if(mx<0){ mx=0; st=i; }
    if(mxx<=mx){ res=i-st; mxx=mx; }
  }
  cout<<res;
  return 0;
}
