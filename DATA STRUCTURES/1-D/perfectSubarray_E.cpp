//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
const int MX = 5000;

int arr[MX+1];

bool checkSquare(int x){
  double xx=sqrt(x); return ((xx-floor(xx))==0);
}

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  int n,res=0; cin>>n;
  for(int i=1;i<=n;++i){ cin>>arr[i]; arr[i]+=arr[i-1]; }
  for(int i=0;i<n;++i) for(int j=i+1;j<=n;++j) if(checkSquare(arr[j]-arr[i])) res++;
  cout<<res;
  return 0;
}
/*
cout<<i<<' '<<j<<' '<<(arr[j]-arr[i])<<'\n';

  1 4 2 3
0 1 5 7 10
*/

