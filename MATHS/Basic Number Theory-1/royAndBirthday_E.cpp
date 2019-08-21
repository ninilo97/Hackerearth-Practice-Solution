#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int MOD = 1000000007;
#define maxn 1000009

long long fact[maxn];

void genFactorial(){
  fact[0] = 1;
  for(long long i = 1; i < maxn; i++) fact[i] = i*fact[i-1]%MOD;
}

long long power(long long x, long long y){
    if(y == 0) return 1;
    long long p = power(x, y/2) % MOD; p = (p * p) % MOD;
    return (y%2 == 0)? p : (x * p) % MOD;
}

long long modInverse(long a, long m){
    long long g = __gcd(a, m);
    if (g != 1) cout << "Inverse doesn't exist";
    else return power(a, m-2);
}

long long startPosCount(long long c, long long v){ long long res = ((((fact[c]%MOD)*(power(fact[v],MOD-2)%MOD))%MOD)*(power(fact[c-v],MOD-2)%MOD))%MOD; return res; }

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  genFactorial();

  int t; string temp_str; cin>>t; getline(cin,temp_str);
  while(t--){
      string str;
      unordered_map<int,int> mpp;
      getline(cin,str);
      int vow=0,coso=0;

      for(int i=0;i<str.size();++i){
          char c = str[i];
          mpp[c-'a']++;
          if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){ vow++; }
          else{ coso++; }
      }

      if(coso>=vow-1){
          long long vnum = fact[vow], vden = 1, cnum = fact[coso], cden = 1, res;
          for(int i=0;i<26;++i){
              if(mpp[i]>1){
                  if(i == 0 || i == 4 || i == 8 || i == 14 || i == 20) vden=((vden%MOD)*(fact[mpp[i]]%MOD))%MOD;
                  else cden=((cden%MOD)*(fact[mpp[i]]%MOD))%MOD;
              }
          }
          //cout<<"("<<vnum<<"/"<<vden<<")*("<<cnum<<"/"<<cden<<")*("<<startPosCount(coso+1,vow)<<")\n";
          res = ((((((vnum%MOD)*(modInverse(vden,MOD)%MOD))%MOD)*(((cnum%MOD)*(modInverse(cden,MOD)%MOD))%MOD))%MOD)*startPosCount(coso+1,vow))%MOD; cout<<res<<"\n";
      }
      else { cout<<"-1\n"; }
  }
  return 0;
}
