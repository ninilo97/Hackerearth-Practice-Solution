//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin>>t; while(t--){
    long long n; cin>>n;
    if(n&1 or n<4) cout<<"-1\n";
    else if(!(n%4)) cout<<((n>>2)*(n>>2)*(n>>2)*(n>>2))<<'\n';
    else if(!(n%6)) cout<<((n/6)*(n/6)*(n/3)*(n/3))<<'\n';
    else if(!(n%10)) cout<<((n/10)*(n/5)*(n/5)*(n>>1))<<'\n';
    else cout<<"-1\n";
  }
  return 0;
}
