//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

string solveEncrypt(int n,string str){
  if(n<3) return str;
  int mid = ((n+(n%2))>>1)-1;
  return str.substr(mid,1)+solveEncrypt(mid,str.substr(0,mid))+solveEncrypt(n-mid-1,str.substr(mid+1));
}

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin>>t; while(t--){
    string str; int n; cin>>n>>str;
    cout<<solveEncrypt(n,str)<<'\n';
  }
  return 0;
}
