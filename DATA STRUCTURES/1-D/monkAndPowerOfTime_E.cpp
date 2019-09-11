//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
const int MX = 100;

int arr[MX];

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  int n,nn,x,idx=0,cidx=0,zeros=0,res=0; cin>>n; nn=n;
  for(int i=0;i<n;++i) cin>>arr[i];
  while(nn--){
    cin>>x; for(;;idx++){
      if(!arr[idx%n]) zeros++;
      if(arr[idx%n]==x){
        res+=(((idx-cidx)%n)+1)-zeros;
        zeros=arr[idx%n]=0;
        cidx=idx;
        break;
      }
    }
  }
  cout<<res;
  return 0;
}
