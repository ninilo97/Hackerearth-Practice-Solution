//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int main(){
  int res=0; string str; cin>>str; for(int i=0;i<str.size();++i) res+=str[i]-'a'+1;
  cout<<res; return 0;
}
