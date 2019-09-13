//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
const int MX = 1e4;

int arr[MX+1],n;

bool check(){
  for(int i=1;i<n;++i){ arr[i]-=arr[i-1]; arr[i-1]=0; if(arr[i]<0) return false;}
  return ((arr[--n]==0)?true:false);
}

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  cin>>n; for(int i=0;i<n;++i) cin>>arr[i];
  cout<<(check()?"YES\n":"NO\n");
  return 0;
}
