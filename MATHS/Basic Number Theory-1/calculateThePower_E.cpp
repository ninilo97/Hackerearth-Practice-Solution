#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int MOD = 1000000007;

long long power(long long x, long long y, long long m){
    if(y == 0) return 1;
    long long p = power(x, y/2, m) % m;
    p = (p * p) % m;
    return (y%2 == 0)? p : (x * p) % m;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long x,y,ans; cin>>x>>y;
  ans = power(x,y,MOD);
  cout<<ans;
  return 0;
}
