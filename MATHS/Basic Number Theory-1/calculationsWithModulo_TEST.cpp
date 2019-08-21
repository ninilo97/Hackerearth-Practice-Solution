#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll MOD,d,x,y;
ll mM(ll a, ll b){
  ll res = 0; a %= MOD;
  while(b){
    if(b & 1) res = (res + a) % MOD;
    a = (a<<1) % MOD, b>>=1;
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

int gcdExtended(int a, int b, int *x, int *y);

int modInverse(int a, int m){ int x, y; gcdExtended(a, m, &x, &y); return (x%m + m) % m; }

int gcdExtended(int a, int b, int *x, int *y){
    if (a == 0){ *x=0, *y=1; return b; }
    int x1, y1;
    int gcd = gcdExtended(b%a, a, &x1, &y1);
    *x=y1-(b/a)*x1; *y=x1; return gcd;
}

int main(){
  int a,b,c; cin>>a>>b>>c>>MOD;
  cout<<mM(power(a,b),modInverse(c,MOD));
  return 0;
}
