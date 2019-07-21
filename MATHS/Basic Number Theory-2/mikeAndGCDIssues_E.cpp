//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
const int MX = 2*1e5;

int spf[MX+1],arr[MX+1],ans[MX+1];
unordered_map<int,int> mpp;

int main(){
  for(int i=2;i<=MX;++i) if(spf[i]==0) for(int j=i;j<=MX;j+=i) if(spf[j]==0) spf[j]=i;

  int n; cin>>n;
  for(int i=1;i<=n;++i) cin>>arr[i];

  for(int i=n;i>0;--i){
    int x = arr[i];
    while(x!=1){
      int y=spf[x];
      if(mpp[y]==0) mpp[y]=i;
      else if(ans[i]==0) ans[i]=mpp[y], mpp[y]=i;
      else ans[i]=min(ans[i],mpp[y]), mpp[y]=i;
      while(x%y==0) x/=y;
    }
  }

  mpp.clear();
  for(int i=1;i<=n;++i){
    int x = arr[i];
    while(x!=1){
      int y=spf[x];
      if(mpp[y]==0) mpp[y]=i;
      else if(ans[i]==0) ans[i]=mpp[y], mpp[y]=i;
      else ans[i]=i-mpp[y]>abs(ans[i]-i)?ans[i]:mpp[y], mpp[y]=i;
      while(x%y==0) x/=y;
    }
  }
  for(int i=1;i<=n;++i) ans[i]==0?cout<<"-1 ":cout<<ans[i]<<" ";
  return 0;
}
