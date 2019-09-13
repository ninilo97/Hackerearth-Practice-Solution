//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  int t; cin>>t; while(t--){
    vi vec; int n,k; cin>>n>>k; k%=n; while(n--){ int x; cin>>x; vec.emplace_back(x); }
    rotate(vec.rbegin(),vec.rbegin()+k,vec.rend());
    for(auto v:vec) cout<<v<<' '; cout<<'\n';
  }
  return 0;
}
