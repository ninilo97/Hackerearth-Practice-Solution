//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  vector<int> vec; int n,d; cin>>n>>d;
  while(n--){ int x; cin>>x; vec.emplace_back(x); }
  rotate(vec.begin(),vec.begin()+d,vec.end());
  for(auto v:vec) cout<<v<<' ';
  return 0;
}
