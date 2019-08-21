#include<bits/stdc++.h>
const int MOD = 1000000007;
using namespace std;

long long modMultiply(long long a, long long b){
    long long res = 0; a %= MOD;
    while(b){
        if(b & 1) res = (res + a) % MOD;
        a = (2 * a) % MOD, b>>=1;
    }
    return res;
}

long long power(long long x, long long y){
  long long res=1;
  while(y){
    if(y%2==0) { y/=2; x = modMultiply(x,x); }
    else { y-=1; res = modMultiply(res,x); y/=2; x=modMultiply(x,x); }
  }
  return res;
}

long long factorial(long long n){
    if(n==0) return 1;
    long long res=1;
    for(int i=1;i<=n;++i) res = modMultiply(res,i);
    return res;
}

int main(){
  int t; cin>>t;
  while(t--){
    int n,k; cin>>n>>k;
    cout<<modMultiply(factorial(k),power(factorial(k-n),MOD-2))<<"\n";
  }
  return 0;
}
