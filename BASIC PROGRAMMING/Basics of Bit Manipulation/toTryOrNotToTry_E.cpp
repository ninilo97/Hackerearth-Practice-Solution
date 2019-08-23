//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
#define M 150

bitset<M> reset,arr[20];

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t,n,m,x; cin>>t; while(t--){
    int cnt=0; cin>>n>>m;
    for(int i=0;i<n;++i) for(int j=m-1;j>=0;--j){ cin>>x; if(x){ bitset<M> tmp; tmp.set(j); arr[i]|=tmp; } }
    for(int i=0;i<(1<<n);++i){
      bitset<M> res; for(int j=0;j<n;++j) if(i&(1<<j)) res|=arr[j];
      if(res.count()==m) cnt++;
    }
    cout<<cnt<<endl;
    for(int i=0;i<n;++i) arr[i]=reset;
  }
  return 0;
}
