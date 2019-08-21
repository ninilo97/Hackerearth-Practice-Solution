#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int MOD = 1000000007;

long long power(long long y, long long x){
    long long res=1;
    while(x>0){
        if(x%2==0) { x/=2; y=((y%MOD)*(y%MOD))%MOD; }
        else { x-=1; res=((res%MOD)*(y%MOD))%MOD; x/=2; y=((y%MOD)*(y%MOD))%MOD; }
    }
    return res;
}

long long modMultiply(long long a, long long b){
    long long res = 0; a %= MOD;
    while(b){
        if(b & 1) res = (res + a) % MOD;
        a = (2 * a) % MOD, b>>=1;
    }
    return res;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t; cin>>t;
  while(t--){
     long long n; cin>>n;
     cout<<power(power(2,MOD-2),n-1)<<"\n";
  }
  return 0;
}
