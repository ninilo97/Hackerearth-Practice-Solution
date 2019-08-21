#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int MOD = 1000000009;

long long modMultiply(long long a, long long b){
    long long res = 0; a %= MOD;
    while(b){
        if(b & 1) res = (res + a) % MOD;
        a = (2 * a) % MOD, b>>=1;
    }
    return res;
}

long long factorial(long long n){
  if(n==0) return 1;
  long long res=1;
  for(int i=1;i<=n;++i) res = modMultiply(res,i);
  return res;
}

long long power(long long y, long long x){
    long long res=1;
    while(x>0){
        if(x%2==0) { x/=2; y=((y%MOD)*(y%MOD))%MOD; }
        else { x-=1; res=((res%MOD)*(y%MOD))%MOD; x/=2; y=((y%MOD)*(y%MOD))%MOD; }
    }
    return res;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long n; cin>>n;// cout<<power(n-1,2)+1;
  cout<<modMultiply(factorial(2*n),power(modMultiply(factorial(n),factorial(n+1)),MOD-2));
  return 0;
}
