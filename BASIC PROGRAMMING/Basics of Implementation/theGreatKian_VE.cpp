//@author Nikhil Londhe
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int MX = 1e5;

int arr[MX];

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n; cin>>n;
  for(int i=0;i<n;++i) cin>>arr[i];

  for(int i=0;i<3;++i){
    ll res=0;
    for(int j=i;j<n;j+=3) res+=arr[j];
    cout<<res<<" ";
  }
  return 0;
}
