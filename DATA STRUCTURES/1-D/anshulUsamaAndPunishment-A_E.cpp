//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int arr[]={20,30,40,90,80,270,160,810,320,2430,640,7290,1280,21870,2560,65610,5120,196830,10240,590490};

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  int n,mx=0; cin>>n; for(int i=0;i<n;++i) for(int j=0;j<n;++j) if(i!=j) mx=max(mx,(arr[i]+arr[j]+abs(arr[i]-arr[j])));
  cout<<mx;
  return 0;
}
