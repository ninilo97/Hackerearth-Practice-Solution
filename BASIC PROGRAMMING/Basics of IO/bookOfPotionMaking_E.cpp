//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,res; cin>>n;
    res=(n%10)+2*((n%100)/10)+3*((n%1000)/100)+4*((n%10000)/1000)+5*((n%100000)/10000)+6*((n%1000000)/100000)+7*((n%10000000)/1000000)+8*((n%100000000)/10000000)+9*((n%1000000000)/100000000)+10*((n%10000000000)/1000000000);
    res%11==0?cout<<"Legal ISBN\n":cout<<"Illegal ISBN\n";
    return 0;
}
