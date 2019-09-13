//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  int t; cin>>t; while(t--){
    multiset<int> st;
    int n; cin>>n; while(n--){
      int x; cin>>x; st.insert(x);
    }
    int mn = *st.begin(),res=0;
    for(auto s:st){
      if(s==mn) res++;
      else break;
    }
    cout<<((res&1)?"Lucky\n":"Unlucky\n");
  }
  return 0;
}
