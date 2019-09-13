//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int res[10];

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  int n; cin>>n; for(int i=1;i<=n;++i){
    int arr[10]={0},x; cin>>x;
    for(;x;x/=10) arr[x%10]=1;
    for(int j=0;j<10;++j) res[j]+=arr[j];
  }
  cout<<*max_element(res,res+10);
  return 0;
}
