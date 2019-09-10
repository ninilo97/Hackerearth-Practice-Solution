//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

void stackReversePrint(stack<char>& stk){
  if(stk.empty()) return;
  char x=stk.top();
  stk.pop();
  stackReversePrint(stk);
  stk.push(x);
  cout<<x;
}

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);\
  stack<char> stk; int n; cin>>n; while(n--){
    char x; cin>>x;
    if(!stk.empty()) (x==stk.top())?stk.pop():stk.push(x);
    else stk.push(x);
  }
  cout<<stk.size()<<'\n';
  stackReversePrint(stk);
  return 0;
}
