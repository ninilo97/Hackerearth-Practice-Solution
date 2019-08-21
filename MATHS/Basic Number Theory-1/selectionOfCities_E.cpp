#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int MOD = 1000000007;

ll poww(ll pw){
    ll res=1, base=2;
    while(pw>0){
        if(pw%2==0) {pw/=2; base=((base%MOD)*(base%MOD))%MOD;}
        else { pw-=1; res=((res%MOD)*(base%MOD))%MOD; pw/=2; base=((base%MOD)*(base%MOD))%MOD;}
    }
    return res;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t; cin>>t;
  while(t--){
      ll n; cin>>n; n=poww(n)-1; cout<<n<<"\n";
  }
  return 0;
}
