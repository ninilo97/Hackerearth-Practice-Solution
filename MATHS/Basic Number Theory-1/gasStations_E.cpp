#include<bits/stdc++.h>
using namespace std;

int main(){
    int tmp,n,x; cin>>n>>x;
    for(int i=0;i<n;++i){
        cin>>tmp;
        if(x-tmp<=0) {cout<<i+1; return 0;}
        x-=tmp;
    }
    return 0;
}
