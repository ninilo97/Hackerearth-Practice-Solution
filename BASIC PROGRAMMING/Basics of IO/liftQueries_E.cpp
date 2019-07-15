#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,a=0,b=7; cin>>t;
    while(t--){
        int x; cin>>x;
        if(abs(b-x)<abs(x-a)){ b=x; cout<<"B\n"; }
        else{ a=x; cout<<"A\n"; }
    }
    return 0;
}
