//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int noOfDiv(int l, int r){
  int arr[r-l+1],mx=-1e9,cnt=0; memset(arr,0,sizeof(arr));
  for(int i=1;i*i<=r;++i){
    int srt = (l/i)*i>=l?(l/i)*i:(l/i+1)*i, sq=i*i;
    for(int j=srt;j<=r;j+=i){
      if(j<sq) continue;
      else if(j==sq) arr[j-l]++;
      else arr[j-l]+=2;
    }
  }
  for(int i=l;i<=r;++i){
    if(arr[i-l]>mx){ cnt=1; mx=arr[i-l];}
    else if(arr[i-l]==mx) cnt++;
  }
  return cnt;
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t; cin>>t;
  while(t--){ int l,r; cin>>l>>r; cout<<noOfDiv(l,r)<<"\n"; }
  return 0;
}
