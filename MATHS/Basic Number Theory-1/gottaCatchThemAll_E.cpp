#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t,k; cin>>t>>k; int tau[k+1]={0};
  for(int i=1;i<=k;++i) for(int j=i;j<=k;j+=i) tau[j]++;
  vector<int> vec(tau+1,tau+1+k); sort(vec.begin(),vec.end());
  while(t--){ int x; cin>>x; auto it = lower_bound(vec.begin(),vec.end(),tau[x]); cout<<it-vec.begin()<<"\n"; }
  return 0;
}
