//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int solveHops(int cur){
  if(cur<2) return 1;
  else if(cur==2) return 2;
  else return solveHops(cur-3)+solveHops(cur-2)+solveHops(cur-1);
  //return cur<2?1:cur==2?2:solveHops(cur-3)+solveHops(cur-2)+solveHops(cur-1); //OR USE THIS
}

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n; cin>>n; cout<<solveHops(n);
  return 0;
}

