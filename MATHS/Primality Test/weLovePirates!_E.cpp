//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MX = 1000;
const int MXX = 3700000;

bool prime[MXX];
int res[MX+1];
vector<int> vec;

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  memset(prime,true,sizeof(prime));
  for(int i = 2; i*i <= MXX; ++i) if(prime[i]) for(int j = i*i; j <= MXX; j+=i) prime[j] = false;
  prime[0] = false, prime[1] = false;

  int sum=0, start=0, ans=0;
  for(int i=1;i<=MX;++i){
    if(prime[i]) vec.emplace_back(i);
    else{ res[i]=ans; continue; }
    if(vec.size()<2){ res[i]=ans; continue;}
    start=0, ans=0; unordered_map<int,bool> mpp;
    for(int k=1;k<vec.size();++k,++start){
      sum=0;
      for(int j=start;j<vec.size();++j){
        sum+=vec[j]; if(j-start>0 and prime[sum] and !mpp[sum]) ans++;
        mpp[sum]=true;
      }
    }
    res[i]=ans;
  }
  int t; cin>>t;
  while(t--){ int n; cin>>n; cout<<res[n]<<"\n"; }
  return 0;
}
