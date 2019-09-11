//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  int n,x,p=0,res=1; cin>>n;
  while(n--){ cin>>x; if(x<p) res++; p=x; }
  cout<<res;
  return 0;
}
