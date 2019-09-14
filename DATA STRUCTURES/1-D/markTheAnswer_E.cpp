//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
const int MX = 1e5;

int arr[MX];

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  int n,k,res=0; bool flag=false; cin>>n>>k; while(n--){
    int x; cin>>x;
    if(x<=k) res++;
    else{ if(flag) break; flag=true; }
  }
  cout<<res;
  return 0;
}
