#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t; cin>>n>>t;
    while(t--){
        int h,w; cin>>h>>w;
        if(h<n or w<n) cout<<"UPLOAD ANOTHER\n";
        else if(h==w) cout<<"ACCEPTED\n";
        else cout<<"CROP IT\n";
    }
    return 0;
}
