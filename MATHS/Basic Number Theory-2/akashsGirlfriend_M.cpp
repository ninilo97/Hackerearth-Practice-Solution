//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9+9;

ll power(ll x, ll y){
  ll res=1; x%=MOD;
  while(y>0){
    if(y&1) res=(res*x)%MOD;
    y>>=1, x=(x*x)%MOD;
  }
  return res;
}
//Even terms from nC0*9^n to nC1*9^0 = ((9+1)^10 - (9-1)^10)/2
int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int t; cin>>t; while(t--){ ll n; cin>>n; cout<<(((power(10,n)-power(8,n))+MOD)*500000005)%MOD<<"\n"; }
  return 0;
}
