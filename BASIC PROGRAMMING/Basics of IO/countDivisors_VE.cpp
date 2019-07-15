#include<bits/stdc++.h>
using namespace std;

int main(){
    int l,r,k,res=0; cin>>l>>r>>k;
    for(int i=l;i<=r;++i) if(i%k==0) res++;
    cout<<res;
    return 0;
}
