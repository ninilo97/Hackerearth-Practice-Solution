//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
const int MX = 1e6;
const int BITS = 20;
typedef long long ll;

ll arr[MX+1][BITS];

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n; cin>>n; for(int i=1;i<=n;++i){
    int x; cin>>x; for(int j=0;j<20;++j) arr[i][j]=arr[i-1][j]+(1&(x>>j));
  }
  int q; cin>>q; while(q--){
    ll res=0; int x1,y1,x2,y2,xtot,ytot; cin>>x1>>y1>>x2>>y2; xtot=x2-x1+1; ytot=y2-y1+1;
    for(int j=0;j<20;++j) res+=(1L<<j)*((arr[x2][j]-arr[x1-1][j])*(ytot-(arr[y2][j]-arr[y1-1][j]))+(arr[y2][j]-arr[y1-1][j])*(xtot-(arr[x2][j]-arr[x1-1][j])));
    cout<<res<<endl;
  }
  return 0;
}
