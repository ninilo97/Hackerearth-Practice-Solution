#include<bits/stdc++.h>
using namespace std;
const long long MOD = 1e9+7;

int main(){
    long long res=1; int n; cin>>n;
    while(n--){ int x; cin>>x; res=(res*x)%MOD; }
    cout<<res;
    return 0;
}
