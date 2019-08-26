//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9+7;
 
int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin>>t; while(t--){
  	ll res=1; string str; cin>>str; for(int i=1;i<str.size();++i) res=(res<<1)%MOD;
  	cout<<res<<endl;
  }
  return 0;
}