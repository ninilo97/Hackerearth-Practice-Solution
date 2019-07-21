//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
const int MX = 1000000;

set<int> st;
int prime[MX+1];

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  for(int i = 2; i*i <= MX; ++i) if(!prime[i]) for(int j = i*i; j <= MX; j+=i) if(!prime[j]) prime[j]=1;
  for(int i = 2; i <= MX; ++i) if(!prime[i]) st.emplace(i);

  int t; cin>>t;
  while(t--){
    int n; cin>>n; auto it = st.lower_bound(n);
    if(*(it)-n==0) cout<<*it<<"\n";
    else if(*it-n < n-*(--it)) cout<<*(++it)<<"\n";
    else cout<<*it<<"\n";
  }
  return 0;
}
