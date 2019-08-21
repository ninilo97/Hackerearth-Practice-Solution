#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int MOD = 1000000007;


long long modMultiply(long long a, long long b, long long m = MOD){
    long long res = 0; a %= m;
    while(b){
        if(b & 1) res = (res + a) % m;
        a = (2 * a) % m, b>>=1;
    }
    return res;
}

long long power(long long y, long long x){
    long long res=1;
    while(x>0){
        if(x%2==0) { x/=2; y=modMultiply(y,y)%MOD; }
        else { x-=1; res=modMultiply(res,y)%MOD; x/=2; y=modMultiply(y,y)%MOD; }
    }
    return res;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long x, y=0; string str; cin>>x>>str;
  for(int i=0;i<str.size();++i) y = (y*10 + (str[i]-'0'))%(MOD-1);
  cout<<power(x,y)%MOD;
  return 0;
}
