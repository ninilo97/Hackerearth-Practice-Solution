//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  string x; int k; cin>>x>>k;
  for(int i=0;i<k and i<x.size();++i) x[i]!='9'?x[i]='9':k++;
  cout<<x;
  return 0;
}
