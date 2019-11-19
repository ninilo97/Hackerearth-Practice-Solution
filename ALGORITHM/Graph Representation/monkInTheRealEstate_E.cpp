//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t; cin>>t; while(t--){
    unordered_set<int> st;
    int e; cin>>e; while(e--){
      int x,y; cin>>x>>y; st.insert(x); st.insert(y);
    }
    cout<<st.size()<<"\n";
  }
  return 0;
}
