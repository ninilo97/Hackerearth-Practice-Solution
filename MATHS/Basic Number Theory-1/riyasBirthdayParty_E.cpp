#include<bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){ long long x; cin >> x; cout<<((x%MOD)*((2*x-1)%MOD))%MOD<<"\n"; }
    return 0;
}
