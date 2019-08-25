//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n,x=0; cin>>n; for(;n;n>>=1) x^=n;
  cout<<x;
  return 0;
}
