//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
const int MX = 2000;

double arr[MX+2];
vector<pair<int,int>> vec;

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  int n; cin>>n;
  for(int i=1;i<=n;++i){ int x; cin>>x; arr[i]=arr[i-1]+x; } arr[n+1]=arr[n];
  for(int i=1;i<=n;++i){
    for(int j=i;j<=n;++j){
      if(((arr[j]-arr[i-1])/(j-i+1))>((arr[i-1]+(arr[n+1]-arr[j]))/((i-1+n-j)?(i-1+n-j):1))) vec.emplace_back(make_pair(i,j));
    }
  }
  cout<<vec.size()<<'\n';
  for(auto v:vec) cout<<v.first<<' '<<v.second<<'\n';
  return 0;
}
