//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
const int MX = 1e5;

int nb[MX+1],XOR[MX+1];

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n,q,x; cin>>n;
  for(int i=1;i<=n;++i){
    cin>>x; XOR[i]=x^XOR[i-1]; nb[i]=(!x)+nb[i-1];
  }
  cin>>q; while(q--){
    int l,r; cin>>l>>r; cout<<(XOR[r]^XOR[l-1])<<" "<<(nb[r]-nb[l-1])<<endl;
  }
  return 0;
}
