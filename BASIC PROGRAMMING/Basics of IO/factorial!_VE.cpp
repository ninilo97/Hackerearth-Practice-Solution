//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,res=1; cin>>n; for(int i=1;i<=n;++i) res*=i;
    cout<<res;
    return 0;
}
