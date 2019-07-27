//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

unordered_map<char,int> mpp;

int main(){
  string str; cin>>str;
  for(int i=0;i<str.size();++i) mpp[str[i]]++;
  for(int i=0;i<10;++i) cout<<i<<" "<<mpp[(char)i+'0']<<"\n";
  return 0;
}
