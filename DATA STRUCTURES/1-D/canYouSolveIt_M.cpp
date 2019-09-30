//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
const int inf = 1e9;

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  int t; cin>>t; while(t--){
    int n,mn1=inf,mx1=-inf,mn2=inf,mx2=-inf; cin>>n;
    for(int i=0;i<n;++i){
      int x; cin>>x;
      if(x+i>mx1) mx1=x+i;
      if(x+i<mn1) mn1=x+i;
      if(x-i>mx2) mx2=x-i;
      if(x-i<mn2) mn2=x-i;
    }
    cout<<max(mx1-mn1,mx2-mn2)<<'\n';
  }
  return 0;
}
