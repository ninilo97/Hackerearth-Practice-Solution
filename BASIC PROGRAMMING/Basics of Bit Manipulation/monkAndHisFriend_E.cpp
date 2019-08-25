//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin>>t; while(t--){
    ll m,p; cin>>m>>p; cout<<(__builtin_popcountll(m^p))<<endl;
  }
  return 0;
}
