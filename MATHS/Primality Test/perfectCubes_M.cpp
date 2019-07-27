//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int nMX = 1000;
const int pMX = 500;

int sumpf[nMX+1][pMX+1],spf[pMX+1],idxs[pMX+1];
ll h1[nMX+1][nMX+1];
unordered_map<ll,int> mp;

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int idx=0;
  for(int i=2;i<=pMX;++i) if(spf[i]==0){
      idxs[i]=idx++;
      for(int j=i;j<=pMX;j+=i) if(spf[j]==0) spf[j]=i;
  }

  int t; cin>>t; for(int i=0,k,x;i<t;++i){
    cin>>k; while(k--){
      cin>>x; for(int xx=idxs[spf[x]];x!=1;x/=spf[x],xx=idxs[spf[x]]) sumpf[i][xx]=++sumpf[i][xx]%3;
    }
  }

  ll res=0;
  for(int i=0;i<t;++i){
    for(int j=i+1;j<t;++j){
      ll x=0;
      for(int k=0;k<idx;++k){
        x=(x<<1)+x+((sumpf[i][k]+sumpf[j][k])%3);
        h1[i][j]=3*h1[i][j]+((3-(sumpf[i][k]+sumpf[j][k])%3)%3);
      }
      res+=mp[x];
    }
    for(int j=0;j<i;++j) mp[h1[j][i]]++;
  }
  cout<<res;
  return 0;
}
