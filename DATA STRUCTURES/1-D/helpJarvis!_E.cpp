//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  int t; cin>>t; while(t--){
    string str; cin>>str; sort(str.begin(),str.end());
    int offset=str[0]-'0',n=str.size();
    for(int i=0;i<n;++i){
      if(str[i]-'0'!=i+offset){ cout<<"NO\n"; break; }
      else if(i==(n-1)) cout<<"YES\n";
    }
  }
  return 0;
}
