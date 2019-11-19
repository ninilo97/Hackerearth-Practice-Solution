//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
const int MX = 1e5;

vector<int> vec[MX],ans;

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int n,m,k,res=0; cin>>n>>m>>k;
  while(m--){
    int a,b; cin>>a>>b;
    vec[a].push_back(b);
  }
  int cur=1;
  while(k--){
      int a,b; cin>>a>>b;
      if(a==cur) cur=b;
  }
  return 0;
}
