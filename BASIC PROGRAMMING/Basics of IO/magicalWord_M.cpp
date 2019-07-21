//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int main(){
  int t; cin>>t; while(t--){
    int n; string str; cin>>n>>str;
    for(int i=0;i<n;++i){
      int x=str[i];
      if(x<70) cout<<(char)67;
      else if(x<73) cout<<(char)71;
      else if(x<77) cout<<(char)73;
      else if(x<82) cout<<(char)79;
      else if(x<87) cout<<(char)83;
      else if(x<94) cout<<(char)89;
      else if(x<100) cout<<(char)97;
      else if(x<103) cout<<(char)101;
      else if(x<106) cout<<(char)103;
      else if(x<109) cout<<(char)107;
      else if(x<112) cout<<(char)109;
      else cout<<(char)113;
    }
    cout<<endl;
  }
  return 0;
}
