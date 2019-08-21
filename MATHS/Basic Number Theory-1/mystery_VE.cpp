#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int res=0, x; cin>>x;
        for(int i=1;i<=sqrt(x);i++){
            if(x%i==0){
                if(x/i == i) {res++; continue;}
                res+=2;
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}
