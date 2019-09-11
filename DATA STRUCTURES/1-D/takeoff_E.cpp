//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  int t; cin>>t; while(t--){
    int n,p,q,r,res=0; cin>>n>>p>>q>>r; int arr[n+1]={0};
    for(int i=p;i<=n;i+=p) arr[i]++;
    for(int i=q;i<=n;i+=q) arr[i]++;
    for(int i=r;i<=n;i+=r) arr[i]++;
    for(int i=0;i<=n;++i) if(arr[i]==1) res++;
    cout<<res<<'\n';
  }
  return 0;
}
