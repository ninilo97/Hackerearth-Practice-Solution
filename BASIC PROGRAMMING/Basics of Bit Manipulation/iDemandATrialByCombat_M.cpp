//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
const int BITS = 30;
const int MX = 1e5;
typedef long long ll;

ll arr[MX+1][BITS];

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  int n,q; cin>>n>>q; for(int i=1;i<=n;++i){
    int x; cin>>x; for(int j=0;j<30;++j) arr[i][j]=arr[i-1][j]+(1&(x>>j));
  }
  for(int i=0;i<q;++i){
    ll res=0,tot; int l,r,x; cin>>l>>r>>x; tot=r-l+1;
    for(ll j=0;j<30;++j) res+=(1L<<j)*((x&(1<<j))?(tot-(arr[r][j]-arr[l-1][j])):(arr[r][j]-arr[l-1][j]));
    cout<<res<<endl;
  }
  return 0;
}
