//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n,res=0; cin>>n; while(n--){ ll x; cin>>x; if((x&(x-1))==0) res++; }
  cout<<res;
  return 0;
}
