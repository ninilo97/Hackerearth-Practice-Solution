//@author Nikhil Londhe
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
template<class T> void ckmax(T &a, T b) { a = max(a, b); }

set<int> st;
unordered_map<int,ll> mpp;
/*
n*(n-1)/2 for n=1000000 is 4999950000.
Hence use <int,ll> instead of <int,int> for mapping even is res is ll
*/
int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t; cin>>t;
  while(t--){
    ll res=0; int n, mx=0; cin>>n; st.clear(), mpp.clear();
    while(n--){ int n; cin>>n; st.emplace(n); mpp[n]++; ckmax(mx,n);}
    for(auto i:st) for(int j=2*i;j<=mx;j+=i){ res+=mpp[i]*mpp[j]; }
    for(auto i:st) { res+=mpp[i]*(mpp[i]-1)/2; }
    cout<<res<<"\n";
  }
  return 0;
}

