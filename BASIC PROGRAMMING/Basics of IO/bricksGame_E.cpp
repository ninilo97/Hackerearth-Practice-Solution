//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,res=0; cin>>n;
    for(int i=1;;++i){
        res+=i; if(res>n){ cout<<"Patlu\n"; break;}
        res+=(i<<1); if(res>n){ cout<<"Motu\n"; break; }
    }
    return 0;
}
