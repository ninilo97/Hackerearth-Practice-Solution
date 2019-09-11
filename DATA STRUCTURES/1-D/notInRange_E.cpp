//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MX = 1e6;

int arr[MX+1];

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  ll n,res=0; cin>>n; while(n--){
    int l,r; cin>>l>>r; arr[l]+=1; arr[r+1]+=-1;
  }
  for(int i=0;i<=MX;++i) arr[i]+=arr[i-1];
  for(int i=0;i<=MX;++i) if(arr[i]==0) res+=i;
  cout<<res<<'\n';
  return 0;
}
