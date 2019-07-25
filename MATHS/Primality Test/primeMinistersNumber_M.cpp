//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
const int MX = 1e6;

bool pr[MX+1];

inline int ps(int x){ return x%10+((x%100)/10)+((x%1000)/100)+((x%10000)/1000)+((x%100000)/10000)+((x%1000000)/100000)+((x%10000000)/1000000); }

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  memset(pr,true,sizeof(pr)); pr[0]=false,pr[1]=false;
  for(int i=2;i*i<=MX;++i) if(pr[i]) for(int j=i*i;j<=MX;j+=i) pr[j]=false;
  int l,r; cin>>l>>r; for(int i=l;i<=r;++i) if(pr[i] and pr[ps(i)]) cout<<i<<" ";
  return 0;
}
