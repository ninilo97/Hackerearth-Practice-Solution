#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MX = 1e7;
const ll preMX = 664579;

ll spf[MX+1], pre[preMX+1];

ll solve(ll n,ll p){
  ll res=1,x=n; for(int i=0;i<p;++i,x*=n) res+=x;
  return res;
}

int main(){
  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

  for(int i=2,cnt=0;i<=MX;i++){
    if(spf[i]==0) spf[i]=i, pre[cnt++]=i;
    for(int j=0;j<cnt and pre[j]<=spf[i];++j){
      ll idx=i*pre[j]; if(idx>MX) break;
      spf[idx]=pre[j];
    }
  }

  int t; cin>>t; while(t--){
    ll n,res=1,sres=1; cin>>n;
    while(n!=1){
      ll nn=spf[n],times=0; while(n%nn==0){ n/=nn, times++; }
      res *= solve(nn,times), sres *= solve(nn*nn,times);
    }
    cout<<((res*res-sres)>>1)<<"\n";
  }
  return 0;
  //nb=
}
