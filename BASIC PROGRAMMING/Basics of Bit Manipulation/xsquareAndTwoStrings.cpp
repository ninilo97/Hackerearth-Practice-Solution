//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin>>t; while(t--){
    int n=0,m=0; string str;
    cin>>str; for(auto s:str) n|=(1<<(s-'a'));
    cin>>str; for(auto s:str) m|=(1<<(s-'a'));
    (n&m)?cout<<"Yes\n":cout<<"No\n";
  }
  return 0;
}
