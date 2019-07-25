//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
const int MX = 1e6;
const int preMX = 78498;

int pr[MX+1], pre[preMX];

int main(){
  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
  int i,cnt=1; pre[0]=2;
  for(i=3;i*i<=MX;i+=2) if(pr[i]==0){ pre[cnt++]=i; for(int j=i*i;j<=MX;j+=(i<<1)) pr[j]=1;}
  for(;i<=MX;i+=2) if(pr[i]==0) pre[cnt++]=i;
  int t; cin>>t; while(t--){ int l,r,res=0,j=1; cin>>l>>r; for(auto p:pre){ res+=upper_bound(pre+j,pre+preMX,r/p)-lower_bound(pre+j++,pre+preMX,l/p+(l%p>0)); if(p*p>=r) break; } cout<<res<<"\n"; }
  return 0;
}
