//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; string str; cin>>n>>str;
    for(int i=0;i<n-1;i++) if(str[i]=='H' and str[++i]=='H'){ cout<<"NO"; return 0; }
    replace(str.begin(),str.end(),'.','B'); cout<<"YES\n"<<str;
    return 0;
}
