//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int a,b,c,x;

int minSteps(int d){ return (d>>1)+(d%2); }

int solveConvert(int b){
  if(a==b) return 0;
  if(a>b) return minSteps(a-b);
  if(b%c) return solveConvert(b+(c-b%c))+minSteps(c-b%c);
  else return solveConvert(b/c)+1;
}

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin>>t; while(t--){ cin>>a>>b>>c; cout<<solveConvert(b)<<'\n'; }
  return 0;
}
