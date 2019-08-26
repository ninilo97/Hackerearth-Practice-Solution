//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
const int MX = 1e3;

int arr[MX];

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin>>t; while(t--){
    int n,k; cin>>n>>k;
    for(int i=0;i<n;++i){ int x; cin>>x; arr[i]=__builtin_popcount(x); }
    stable_sort(arr,arr+n,[](int a, int b){return a>b;});
    cout<<accumulate(arr,arr+k,0)<<endl;
  }
  return 0;
}
