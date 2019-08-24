//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
const int MX = 1e5;

int arr[MX];

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin>>t; while(t--){
    int n; cin>>n;
    for(int i=0;i<n;++i) cin>>arr[i];
    stable_sort(arr,arr+n,[](int a, int b){return __builtin_popcount(a)<__builtin_popcount(b);});
    for(int i=0;i<n;++i) cout<<arr[i]<<" ";
    cout<<endl;
  }
  return 0;
}
