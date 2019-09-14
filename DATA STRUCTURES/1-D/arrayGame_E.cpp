//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  int n,m; ll res=0; cin>>n>>m; vector<int> nn,mm;
  for(int i=0;i<n;++i){ int x; cin>>x; nn.emplace_back(x); }
  for(int i=0;i<m;++i){ int x; cin>>x; mm.emplace_back(x); }
  sort(nn.begin(),nn.end()); sort(mm.begin(),mm.end());
  auto i=nn.begin(); auto j=mm.rbegin();
  for(;i!=nn.end() and j!=mm.rend();++i,++j){
    if((*i)<(*j)) res+=((*j)-(*i));
    else break;
  }
  cout<<res;
  return 0;
}
