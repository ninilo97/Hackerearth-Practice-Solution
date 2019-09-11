//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  int t; cin>>t; while(t--){
    int n,r,x,y=0,k=0; cin>>n>>r; while(n--){
      cin>>x; if(y<x){ k++; y=x; }
    }
    cout<<(k*r)<<'\n';
  }
  return 0;
}
