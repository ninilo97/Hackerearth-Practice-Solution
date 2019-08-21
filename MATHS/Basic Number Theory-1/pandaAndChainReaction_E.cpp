#include<bits/stdc++.h>
using namespace std;

const int MOD = 1000003;

int main(){
    int t; cin >> t;
    vector<long long>vec; vec.resize(MOD+1); vec[0]=1;
    for(int i=1;i<=MOD;i++) vec[i] = (vec[i-1]*i)%MOD;
    for(int i=0;i<t;++i){
        long long n,k; cin>>n>>k;
        if(n<MOD) cout<<((k%MOD)*(vec[n]%MOD))%MOD<<"\n";
        else cout<<"0\n";
    }
    return 0;
}
