#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t; while(t--){
        int sh,sm,eh,em; cin>>sh>>sm>>eh>>em;
        int tot=(60*eh)-(60*sh)+em-sm;
        cout<<tot/60<<" "<<tot%60<<"\n";
    }
    return 0;
}
