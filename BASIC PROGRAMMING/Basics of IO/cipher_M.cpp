#include<bits/stdc++.h>
using namespace std;

int main(){
  int n; string str; cin>>str>>n;
  for(int i=0;i<str.size();++i){
    if(isdigit(str[i])) str[i]=(str[i]-'0'+n)%10+'0';
    else if(isupper(str[i])) str[i]=((str[i]-'A'+n)%26)+'A';
    else if(islower(str[i])) str[i]=((str[i]-'a'+n)%26)+'a';
  }
  cout<<str;
  return 0;
}
