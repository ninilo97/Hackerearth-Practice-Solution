//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n,res=0; cin>>n; while(n--){ int x; cin>>x; res|=x; }
  cout<<res;
  return 0;
}
