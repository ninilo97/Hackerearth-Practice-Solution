//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string a,b; cin>>a>>b;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        a==b?cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}
