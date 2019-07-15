#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  int t; cin>>t; while(t--){
    int res=0;
    string str; cin>>str;
    for(int i=0;i<str.size();++i){
        if(str[i]=='0' or str[i]=='6' or str[i]=='9') res+=6;
        else if(str[i]=='2' or str[i]=='3' or str[i]=='5') res+=5;
        else if(str[i]=='8') res+=7;
        else if(str[i]=='4') res+=4;
        else if(str[i]=='7') res+=3;
        else res+=2;
    }
    if(res%2==1){ cout<<"7"; res-=3; }
    for(int i=0;i<(res/2);++i) cout<<"1";
    cout<<"\n";
  }
  return 0;
}
