//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

bool bitcompare(int x, int y){ return (__builtin_popcount(x) < __builtin_popcount(y)); }

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  int t; cin>>t; while(t--){
    int n,k,mask,res=11; cin>>n>>k; int arr[n];
    for(int i=0;i<n;++i){ string str; cin>>str; arr[i]=stoll(str,0,2); }
    sort(arr, arr+n, bitcompare);
    for(int i=1;i<(1<<k);++i){
      mask = i; for(auto a:arr) if(!(mask&a)){ mask=0; break; }
      if(mask) res=min(res,__builtin_popcount(mask));
    }
    cout<<res<<endl;
  }
  return 0;
}
