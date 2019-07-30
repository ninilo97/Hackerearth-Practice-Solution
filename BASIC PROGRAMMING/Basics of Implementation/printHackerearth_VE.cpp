//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int str[26];
char iter[] = {'a','c','e','h','k','r','t'};

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int mx=1e9,n; cin>>n;
  for(int i=0;i<n;++i){ char x; cin>>x; str[x-'a']+=(x=='c' or x=='k' or x=='t')?2:1; }
  for(int i=0;i<7;++i) mx=min(str[iter[i]-'a'],mx);
  cout<<(mx>>1);
  return 0;
}
