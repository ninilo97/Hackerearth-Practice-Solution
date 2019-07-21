//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MX = 50000;

int arr[MX+1];

int main(){
  int t; cin>>t;
  while(t--){
    int n,c,res=0; cin>>arr[0]>>arr[1]>>c>>n;
    for(int i=2;i<n;++i) arr[i]=(arr[i-1]*c+arr[i-2])%10;
    for(int i=0;i<n;++i) res=(res*10+arr[i])%41;
    res==0?cout<<"YES\n":cout<<"NO\n";
  }
  return 0;
}
