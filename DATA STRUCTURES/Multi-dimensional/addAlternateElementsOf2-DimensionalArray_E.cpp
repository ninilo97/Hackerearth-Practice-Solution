//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  int n=9,a1=0,a2=0; for(int i=1;i<=n;++i){ int x; cin>>x; (i&1)?(a1+=x):(a2+=x); }
  cout<<a1<<'\n'<<a2;
  return 0;
}
