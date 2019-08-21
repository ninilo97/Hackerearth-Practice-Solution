//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MX = 100;

ll fact[MX+1];

ll mM(ll a, ll b){
  ll res = 0;
  while(b){
    if(b & 1) res += a;
    a *= 2, b>>=1;
  }
  return res;
}

ll power(ll x, ll y){
  ll res=1;
  while(y>0){
    if(y&1) res=mM(res,x);
    y>>=1, x=mM(x,x);
  }
  return res;
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  fact[0]=1;
  for(ll i=1;i<=MX;++i) fact[i]=(fact[i-1]*i);

  int n,k,m=0;
  cin>>n>>k;
  while(n--){ int x; cin>>x; if(x%2==0) m++; }
  m=(m>=k)?fact[m]/(fact[m-k]*fact[k]):0;
  cout<<m;
  return 0;
}
