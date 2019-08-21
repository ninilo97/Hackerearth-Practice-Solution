//@author Nikhil Londhe
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

ll mM(ll a, ll b){
  ll res = 0;
  while(b){
    if(b & 1) res = (res + a);
    a = (a<<1), b>>=1;
  }
  return res;
}

int main(){
  int t; cin>>t; while(t--){
    ll n; cin>>n; if(n<4){ cout<<"0\n"; continue; }
    n-=2;
    n=mM(n,n+1);
    n>>=1;
    n--;
    if(n<0) cout<<"0\n";
    else cout<<n<<"\n";
  }
  return 0;
}
