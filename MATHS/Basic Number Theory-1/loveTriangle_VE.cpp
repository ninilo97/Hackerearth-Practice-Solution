//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

long long mod_base(long long x){
    if(x<9) return x;
    else return x%9 + 10*mod_base(x/9);
}

int main(){
    long long n;
    while(cin>>n) { cout << mod_base(n) << "\n"; }
    return 0;
}
