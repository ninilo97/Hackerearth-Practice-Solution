//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
const int MX = 20;

int arr[MX][MX];

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n,m,k,res=0; cin>>n>>m>>k;
  for(int i=0;i<n;++i) for(int j=0;j<m;++j) cin>>arr[i][j];
  for(int i=0;i<(1<<m);++i){
    int mxlist[n]={0}, l = k - __builtin_popcount(i);
    if(l<0) continue;
    for(int a=0;a<n;++a) for(int b=0;b<m;++b) if((i>>b)&1 and arr[a][b]==1) mxlist[a]++;
    sort(mxlist, mxlist+n, greater<int>());
    res = max(res, accumulate(mxlist,mxlist+min(l,n),0));
  }
  cout<<res<<endl;
  return 0;
}
