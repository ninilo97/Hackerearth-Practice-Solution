//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
const int MX = 100000;

bool prime[MX+1];

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  memset(prime,true,sizeof(prime));
  for(int i = 2; i*i <= MX; ++i) if(prime[i]) for(int j = i*i; j <= MX; j+=i) prime[j] = false;
  prime[0] = false ,prime[1] = false;

  int t; cin>>t;
  while(t--){
    vector<char> vec; unordered_map<char,int> mpp; bool fl=true; int cnt=0; string str; cin>>str;
    for(int i=0;i<str.size();++i){ char c = str[i]; if(mpp[c]++==0){ cnt++; vec.emplace_back(c); } }
    if(!prime[cnt]){ cout<<"NO\n"; continue; }
    for(auto i:vec){
      if(prime[mpp[i]]) continue;
      fl = false;
    }
    fl?cout<<"YES\n":cout<<"NO\n";
  }
  return 0;
}
