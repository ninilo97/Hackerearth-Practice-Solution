//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
    int cnt=0;
    for(int i=1;i*i<=n;++i){
        if(n%i==0) {
            if(n==i*i) cnt++;
            else cnt+=2;
        }
    }
    if(cnt==2) return true;
    return false;
}

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int t; cin>>t;
  while(t--){
      int n; cin>>n;
      if(prime(n+1) and n!=1) cout<<"NO\n";
      else cout<<"YES\n";
  }
  return 0;
}
