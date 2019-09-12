//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
const int MX = 1e6;

int arr[MX+1],arrSum[MX+1],arrRes[MX+1];

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  int n; cin>>n;
  for(int i=1;i<=n;++i) cin>>arr[i];
  for(int i=1;i<=n;++i) arrSum[i]=arr[i]+arrSum[i-1];
  for(int i=1;i<n;++i) if((arr[i-1]+arr[n])%2==0) if((arrSum[n]-arrSum[i]+arrSum[i-1])%3==0) if((arr[i-1]+arr[n])%5==0) arrRes[i]=1;
  if(arr[n-1]%2==0) if(arrSum[n-1]%3==0) if(arr[n-1]%5==0) arrRes[n]=1;
  for(int i=1;i<=n;++i) arrRes[i]+=arrRes[i-1];
  int q; cin>>q; while(q--){ int l,r; cin>>l>>r; cout<<(arrRes[r]-arrRes[l-1])<<'\n'; }
  return 0;
}
