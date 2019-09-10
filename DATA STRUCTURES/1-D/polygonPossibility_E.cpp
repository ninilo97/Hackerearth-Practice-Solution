//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  int t; cin>>t; while(t--){
    int n,mx=0,sum=0; cin>>n; while(n--){ int x; cin>>x; mx=max(mx,x); sum+=x; }
    cout<<(((sum-mx)>mx)?"Yes":"No")<<'\n';
  }
  return 0;
}
