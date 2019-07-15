#include<bits/stdc++.h>
using namespace std;

int main(){
    string str; cin>>str;
    string strn(str);
    reverse(str.begin(),str.end());
    if(str==strn) cout<<"YES";
    else cout<<"NO";
    return 0;
}
