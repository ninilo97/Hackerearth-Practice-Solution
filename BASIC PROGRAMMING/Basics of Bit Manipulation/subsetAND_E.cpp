//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin>>t; while(t--){
    int f=0,z,n,x; cin>>z>>n; while(n--){ int x; cin>>x; if(!(z&=x)) f=1; }
    (f)?cout<<"Yes\n":cout<<"No\n";
  }
  return 0;
}
