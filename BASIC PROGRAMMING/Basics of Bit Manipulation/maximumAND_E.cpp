//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin>>t; while(t--){
  	ll a,b; cin>>a>>b; (b-a==1)?cout<<(b&(b-1))<<endl:cout<<max(b&(b-1),(b-1)&(b-2))<<endl;
  }
  return 0;
}
