//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  int n,k; cin>>n>>k;
  queue<int> que; multiset<int> st;
  for(int i=1;i<=n;++i){
    int x; cin>>x; st.insert(x); que.push(x);
    if(i>=k){
      cout<<(*st.rbegin())<<' ';
      int y = que.front(); que.pop();
      st.erase(st.find(y));
    }
  }
  return 0;
}
