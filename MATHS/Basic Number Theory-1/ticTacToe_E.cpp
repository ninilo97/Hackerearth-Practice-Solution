#include<bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

int main(){
  int t; cin>>t;
  while(t--){ long long n; cin>>n; cout<<(((((((n%MOD)*((n-1)%MOD))%MOD)*(n-1)%MOD))%MOD)*(250000002%MOD))%MOD<<" "<<(((((((n%MOD)*((n-1)%MOD))%MOD)*(2*n-1)%MOD))%MOD)*(166666668%MOD))%MOD<<"\n"; }
  return 0;
}
