//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin>>t; while(t--){
    int n,tot=0; cin>>n; while(n--){ int x; cin>>x; if(x>0) tot+=x; }
    (tot and (tot&(tot-1))==0)?cout<<"Yes\n":cout<<"No\n";
  }
  return 0;
}
