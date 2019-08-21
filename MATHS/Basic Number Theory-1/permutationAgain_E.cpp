#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t; cin>>t;
  while(t--){
      ll x; cin>>x; x = x>1?floor(x*x/2)-1:1; cout<<x<<"\n";
  }
  return 0;
}
