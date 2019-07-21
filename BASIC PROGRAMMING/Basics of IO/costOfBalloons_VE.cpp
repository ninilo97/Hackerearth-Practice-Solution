//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t; cin>>t;
  while(t--){
    int x=0, y=0, xx, yy, tt; cin>>xx>>yy>>tt;
    while(tt--){ int t1,t2; cin>>t1>>t2; x+=t1; y+=t2; }
    cout<<min(x,y)*max(xx,yy)+max(x,y)*min(xx,yy)<<"\n";
  }
  return 0;
}
