#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,res=0; cin>>t; while(t--){ int r,x; cin>>r>>x; if(x*100.0>=(44.0/7.0)*r) res++; }
    cout<<res;
    return 0;
}
