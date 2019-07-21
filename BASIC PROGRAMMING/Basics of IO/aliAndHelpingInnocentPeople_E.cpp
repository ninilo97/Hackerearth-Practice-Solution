//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int main(){
    string a; cin>>a;
    if(a[2]=='A' or a[2]=='E' or a[2]=='I' or a[2]=='O' or a[2]=='U' or a[2]=='Y'){ cout<<"invalid\n"; return 0; }
    if((a[0]+a[1])%2!=0 or (a[3]+a[4])%2!=0 or (a[4]+a[5])%2!=0 or (a[7]+a[8])%2!=0){ cout<<"invalid\n"; return 0; }
    else cout<<"valid\n"; return 0;
}
