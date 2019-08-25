//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin>>t; while(t--){ int n; string str; cin>>n>>str; cout<<count(str.begin(),str.end(),'1')<<endl; }
  return 0;
}
