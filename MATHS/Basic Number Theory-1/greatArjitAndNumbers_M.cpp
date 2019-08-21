//@author Nikhil Londhe
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

long long modInverse(long a, long m){
    long long g = __gcd(a, m);//GCD(a, m);
    if (g != 1) cerr << "calgorithm::modInverse : Inverse doesn't exist";
    else return power(a, m-2);
}

long long modMultiply(long long a, long long b){
    long long res = 0; a %= MOD;
    while(b){
        if(b & 1) res = (res + a) % MOD;
        a = (2 * a) % MOD, b>>=1;
    }
    return res;
}

int sumArr[100001], A[100001], temp[100001];

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int i,t; cin>>t;
  while(t--){
    long long res=0;
    int n,tmpp; cin>>n; if(n==1) { cout<<"0\n"; continue; }
    for(int i=0;i<n;++i) { int tmp; cin>>tmp; temp[i]=tmp%MOD; }
    for(int i=0;i<n-1;++i) { A[i] = (modMultiply(temp[i+1],modInverse(temp[i],MOD)))%MOD; }
    sumArr[0]=temp[0];
    for(int i=1;i<n;++i) sumArr[i]=(temp[i]+sumArr[i-1])%MOD;
    for(int i=0;i<n-1;++i) { res = (res+modMultiply((modMultiply(A[i],A[i]+1)%MOD),500000004)%MOD)%MOD; }
    cout<<((((res%MOD)*((res+1)%MOD))%MOD)*(modInverse(2,MOD)))%MOD<<"\n";
  }
  return 0;
}
