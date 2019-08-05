//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin>>t; while(t--){
    string str; int n,cnt=0; cin>>n>>str;
    for(int i=0;i<n;++i) if(str[i]=='0') cnt++;
    cout<<cnt<<'\n';
  }
  return 0;
}
