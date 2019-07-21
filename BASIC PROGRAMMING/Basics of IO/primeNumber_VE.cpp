//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
const int MX=1000;

bool prime[MX];

int main(){
    memset(prime,true,sizeof(prime));
    for(int i=2;i*i<=MX;++i) if(prime[i]) for(int j=i*i;j<=MX;j+=i) prime[j]=false;
    int n; cin>>n; for(int i=2;i<=n;i++) if(prime[i]) cout<<i<<" ";
    return 0;
}
