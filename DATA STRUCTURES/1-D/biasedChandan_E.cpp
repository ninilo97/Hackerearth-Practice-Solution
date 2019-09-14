//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

stack<int> stk;

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  int n,res=0; cin>>n;
  while(n--){
    int x; cin>>x;
    if(x==0 and !stk.empty()) stk.pop();
    else stk.push(x);
  }
  while(!stk.empty()){ res+=stk.top(); stk.pop(); }
  cout<<res;
  return 0;
}
