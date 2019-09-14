//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

vector<pair<int,string>> vec;

bool pairReverse(const pair<int,string> &a, const pair<int,string> &b){ return (a.first>b.first); }

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  int n; cin>>n; while(n--){
    int x; string str; cin>>str>>x; vec.emplace_back(x,str);
  }
  sort(vec.begin(),vec.end(),pairReverse);
  for(int i=0;i<3;++i) cout<<vec[i].second<<'\n';
  return 0;
}
