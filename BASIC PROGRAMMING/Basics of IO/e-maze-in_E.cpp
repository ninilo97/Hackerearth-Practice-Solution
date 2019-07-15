#include<bits/stdc++.h>
using namespace std;

int main(){
    string str; cin>>str;
    int x=0,y=0;
    for(int i=0;i<str.length();++i){
        if(str[i]=='L') x-=1;
        else if(str[i]=='R') x+=1;
        else if(str[i]=='D') y-=1;
        else y+=1;
    }
    cout<<x<<" "<<y;
    return 0;
}
