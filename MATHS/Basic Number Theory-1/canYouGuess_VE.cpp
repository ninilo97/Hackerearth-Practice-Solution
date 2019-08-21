#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    for(int i=0;i<n;++i){
        int tmp;
        cin>>tmp;
        int res=0;
        for(int j=1;j<tmp;++j) if(tmp%j==0) res+=j;
        cout<<res<<"\n";
    }
    return 0;
}
