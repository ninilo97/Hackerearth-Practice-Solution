//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
const int inf = 1e9;

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  int t; cin>>t; while(t--){
    int x,mn=inf,n,k; cin>>n>>k; while(n--){ cin>>x; mn=min(mn,x); }
    cout<<((mn<k)?(k-mn):0)<<'\n';
  }
  return 0;
}
