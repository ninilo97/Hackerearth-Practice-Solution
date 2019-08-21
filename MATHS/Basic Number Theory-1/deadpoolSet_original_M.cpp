#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int MOD = 1000000007;
const int MX = 1000000;

int inputArr[MX+1], numOfFactors[MX+1];
vector<vector<int>> factors;

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

  factors.resize(MX+1);
  for(int i=2;i<=MX;++i) for(int j=i+i;j<=MX;j+=i) factors[j].emplace_back(i);

  long long res = 0;
  int t; cin>>t;
  while(t--){ int n; cin>>n; inputArr[n]=1; }
  for(int i=2;i<=MX;++i){
    if(inputArr[i]){
      numOfFactors[i]=1;
      for(int j=0;j<factors[i].size();++j){
          int x = factors[i][j], y = i/factors[i][j];
          if(inputArr[x] and inputArr[y]) { numOfFactors[i] += modMultiply(numOfFactors[x],numOfFactors[y]); if(numOfFactors[i]>MOD) numOfFactors[i]%=MOD;}
      }
    }
    res += numOfFactors[i];
    if(res>=MOD) res%=MOD;
  }
  cout<<res;
  return 0;
}
